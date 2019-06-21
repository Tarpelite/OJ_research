int x[100],y[100];
int N(int r,int L,int x[100],int a)
{
    int n=0,i;
    for(i=r;i<=L;i++)n=(n+x[i])%a;
    return n;
}
int M(int r,int L,int x[100],int a)
{
    int n=1,i;
    for(i=r;i<=L;i++)n=(n*x[i])%a;
    return n;
}
int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}
int H(int p,int q,int x[100])
{   int i,n=0;
    for(i=p;i<=q;i++)n=n^x[i];
    return n;
}
int main()
{   int a,b,r,L,i,n,m,p,q;
    scanf("%d%d",&a,&b);

    for(i=0;i<a;i++)scanf("%d",&x[i]);

    for(i=0;i<b;i++)
    {   scanf("%d%d",&r,&L);
        n=N(r,L,x,a);m=M(r,L,x,a);
        p=min(n,m);q=max(n,m);
        y[i]=H(p,q,x);
    }

    for(i=0;i<b;i++)printf("%d\n",y[i]);
    return 0;
}
