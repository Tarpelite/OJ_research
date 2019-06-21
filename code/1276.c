#include<stdio.h>

int N(int l,int r,int n,int a[])
{
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        ans+=a[i];
    }
    return ans%n;
}
long long chengfa(long long x,long long y,long long mod)
{

    long long ans=0;
    while(y)
    {
        if(y&1)
            ans=(ans+x)%mod;
        y>>=1;
        x=x*2%mod;
    }
    return ans;
}
int M(int l,int r,int n,int a[])
{
    int ans=1;
    for(int i=l;i<=r;i++)
    {
        ans=chengfa(ans,a[i],n);
    }
    return ans;
}
int H(int l,int r,int a[])
{
    int ans=0;
    for(int i=l;i<=r;i++)
    {
        ans=ans^a[i];
    }
    return ans;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
    int n,k,l,r,a[200],i,t[210];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    {
        scanf("%d%d",&l,&r);
        t[i]=H(min(N(l,r,n,a),M(l,r,n,a)),max(N(l,r,n,a),M(l,r,n,a)),a);
    }
    for(i=0;i<k;i++)
        printf("%d\n",t[i]);
    return 0;
}