#include<stdio.h>
int a[100],n,K;
int N(int l,int r)
{
    int res=0,i;
    for(i=l;i<=r;i++)
        res=(res+a[i])%n;
    return res;
}
int M(int l,int r)
{
    int res=1,i;
    for(i=l;i<=r;i++)
        res=(res*a[i])%n;
    return res;
}
int H(int l,int r)
{
    int res=0,i;
    if(l>r)
    {
        i=r;
        r=l;
        l=i;
    }
    for(i=l;i<=r;i++)
        res=res^a[i];
    return res;
}
int main()
{
    int i,j,k;
    scanf("%d%d",&n,&K);
    int l[K],r[K];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<K;i++)
    {
        scanf("%d%d",&l[i],&r[i]);
    }
    for(i=0;i<K;i++)
    {
        printf("%d\n",H(N(l[i],r[i]),M(l[i],r[i])));
    }
    return 0;
}