#include<stdio.h>
#include<stdlib.h>
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a
int a[105],b[105],dat[105];
int nf(int l,int r,int n)
{
    int ans=0;
    for(int i=l;i<=r;i++)
    ans=(ans+dat[i])%n;
    return ans;
}
int mf(int l,int r,int n)
{
    int sum=1;
    for(int i=l;i<=r;i++)
        sum=((sum%n)*(dat[i]%n))%n;
    return sum;
}
int hf(int l,int r)
{
    int ans=dat[l];
    for(int i=l+1;i<=r;i++)
        ans=ans^dat[i];
    return ans;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)scanf("%d",&dat[i]);
    for(int i=0;i<k;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        int x,y;
        x=nf(a[i],b[i],n);
        y=mf(a[i],b[i],n);
        printf("%d\n",hf(min(x,y),max(x,y)));

    }
    return 0;
}