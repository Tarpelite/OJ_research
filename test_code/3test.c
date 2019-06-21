long long N(int,int,int [],int);
long long M(int,int,int [],int);
long long H(long long,long long,int [],int);
long long min(long long,long long);
long long max(long long,long long);
int main()
{
    int n,K;
    scanf("%d %d",&n,&K);
    int a[105]={0},i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k,l,m;
    for (k=0;k<K; k++)
    {
        scanf("%d %d",&l,&m);
        printf("%lld\n",H(min(N(l,m,a,n),M(l,m,a,n)),max(N(l,m,a,n),M(l,m,a,n)),a,n));
    }
}


long long N(int l,int m,int a[],int n)
{
    int i;
    long long s=0;
    for (i=l; i<=m; i++)
    {
        s+=a[i];
    }
    return (s%n);
}
long long M(int l,int m ,int a[],int n)
{
    int i;
    long long s=1;
    for (i=l; i<=m; i++)
    {
        s*=a[i];
        s%=n;
    }
    return s;
}
long long H(long long l,long long m,int a[],int n)
{
    long long i,s=0;
    for (i=l; i<=m; i++) {
        s=s^a[i];
    }
    return s;
}

long long min(long long a,long long b)
{
    if (a<b) {
        return a;
    }
    return b;
}

long long max(long long b,long long a)
{
    if (b<a) {
        return a;
    }
    return b;
}
