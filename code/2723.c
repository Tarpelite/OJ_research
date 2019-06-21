#include <stdio.h>
#include <math.h>

int N(int l,int r,int n,int a[])
{
    int i,s;
    for(i=l,s=0;i<=r;i++)
    {
        s=s+a[i];
    }
    return s%n;
}
int M(int l,int r,int n,int a[])
{
    int i,s;
    for(i=l,s=1;i<=r;i++)
    {
        s=(s*(a[i]%n))%n;
    }
    return s;
}
int H(int l,int r,int n,int a[])
{
    int i,s;
    for(i=l,s=0;i<=r;i++)
    {
        s=s^a[i];
    }
    return s;
}

int main()
{
int n,l,r,i,K,t,h;
int a[1000],min[1000],max[1000];
scanf("%d%d",&n,&K);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(t=0;t<K;t++)
{   scanf("%d%d",&l,&r);
    min[t]=N(l,r,n,a)<=M(l,r,n,a)?N(l,r,n,a):M(l,r,n,a);
    max[t]=N(l,r,n,a)>=M(l,r,n,a)?N(l,r,n,a):M(l,r,n,a);
}
for(i=0;i<t;i++)
{   h=H(min[i],max[i],n,a);
    printf("%d\n",h);

}
return 0;
}