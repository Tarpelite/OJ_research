#include<stdio.h>
int a[105];
int n;
int main()
{
    int K,l,r,m_1,n_1;
    scanf("%d%d",&n,&K);
    for(int n_1=0; n_1<n; n_1++)
    {
        scanf("%d",&a[n_1]);
    }

    for(;K>0;K--)
    {
        scanf("%d %d",&l,&r);
        m_1=min(N(l,r),M(l,r));
        n_1=max(N(l,r),M(l,r));
        printf("%d\n",H(m_1,n_1));
    }
    return 0;
}
int N(int l,int r)
{
    int i=0,g=0;
    for(int f=l;f<=r;f++)
    {
        g=g+(a[f]%n);
        g%=n;
    }
    return g;
}
int M(int l,int r)
{
    int i=0,g=1;
    for(int f=l;f<=r;f++)
    {
        g=g*(a[f]%n);
        g%=n;
    }
    return g;
}
int H(int l,int r)
{
        int i=0,g=0;
    for(int f=l;f<=r;f++)
    {
        g=g^a[f];

    }
    return g;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}