#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
int nipple(int *a,int l,int r,int n)
{
    int s=0,t=l,m=r;
    while(t<=m)
    {
        s=s+a[t];
        t++;
    }
    s=s%n;
    return s;
}
int mountvoom(int *a,int l,int r,int n)
{
    int s=1,t=l,m=r;
    while(t<=m)
    {
        s%=n;
        s*=a[t]%n;
        t++;
    }
    s=s%n;
    return s;
}
int hugegun(int *a,int l,int r,int n)
{
    int t=l,m=r;
    int s=0;
    while(t<=m)
    {
        s=s^a[t];
        t++;
    }
    return s;
}
int main()
{
    int n,k,l,r;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int j=0,mist[k];
    while(j<k)
    {
        scanf("%d%d",&l,&r);
        int e=min(nipple(a,l,r,n),mountvoom(a,l,r,n));
        int f=max(nipple(a,l,r,n),mountvoom(a,l,r,n));
        mist[j]=hugegun(a,e,f,n);
        printf("%d\n",mist[j]);
        j++;
    }
    return 0;
}