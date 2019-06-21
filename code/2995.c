int H(int l,int r,int a[],int n);
int main()
{
    int n,a[100],l[101],r[101],h[101],i,k;
        scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);}
    for(i=1;i<=k;i++)
        {scanf("%d%d",&l[i],&r[i]);}
    for(i=1;i<=k;i++)
        {h[i]=H(min(N(l[i],r[i],a,n),M(l[i],r[i],a,n)),max(N(l[i],r[i],a,n),M(l[i],r[i],a,n)),a,n);}
    for(i=1;i<=k;i++)
        {printf("%d\n",h[i]);}
    return 0;

}
int max(int a,int b)
{
    return(a>b?a:b);
}
int min(int a,int b)
{
    return(a<b?a:b);
}
int M(int l,int r,int a[],int n)
{
    int j,op=0;
    for(j=l;j<=r;j++)
        {op+=a[j];}
    op=op%n;
    return (op);

}
int N(int l,int r,int a[],int n)
{
    int j,op=1;
    for(j=l;j<=r;j++)
        {op=(op*(a[j]%n))%n;}
    return (op);

}
int H(int l,int r,int a[],int n)
{
    int j,op=a[l];
    for(j=l+1;j<=r;j++)
        {op=op^a[j];}
    return (op);

}