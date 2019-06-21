#include<stdio.h>
int N(int l,int r,int a[],int n)
{
    int ret=0;
    for(int i=l;i<=r;i++)
        ret=ret+a[i];
        ret=ret%n;
    return ret;
}
int M(int l,int r,int a[],int n)
{
    int ret=1;
    for(int i=l;i<=r;i++)
        {
        ret*=(a[i]%n);
        ret=ret%n;
        }
    return ret ;
}
int H(int l,int r,int a[])
{
    int ret=a[l];
    for(int i=l+1;i<=r;i++)
        ret=ret^a[i];
    return ret;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int n,k,a[105],l,r;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<k;i++)
        {
            scanf("%d%d",&l,&r);
            printf("%d\n",H(min(N(l,r,a,n),M(l,r,a,n)),max(N(l,r,a,n),M(l,r,a,n)),a));
        }

}