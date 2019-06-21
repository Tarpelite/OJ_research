#include <stdio.h>
int niu(int[],int,int,int);
int mou(int[],int,int,int);
int hug(int[],int,int);
int main()
{
    int n,K,h[100],l,r,g[100],a,b,i;
    scanf("%d %d",&n,&K);
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
    }
    for(i=0;i<K;i++)
    {
        scanf("%d %d",&l,&r);
        a=niu(h,l,r,n);
        b=mou(h,l,r,n);
        if(a<b)
            g[i]=hug(h,a,b);
        else if(a>b)
            g[i]=hug(h,b,a);
        else if(a==b)
            g[i]=h[a];
    }
    for(i=0;i<K;i++)
    {
        printf("%d\n",g[i]);
    }
    return 0;
}
int niu(int h[],int l,int r,int n)
{
    int x=0,i;
    for(i=l;i<=r;i++)
    {
        x=x+h[i];
    }
    return x%n;
}
int mou(int h[],int l,int r,int n)
{
    int x=1,i;
    for(i=l;i<=r;i++)
    {
        x=x*h[i];
        x=x%n;
    }
    return x;
}
int hug(int h[],int l,int r)
{
    int x,i;
    x=h[l];
    for(i=l;i<r;i++)
    {
        x=x^h[i+1];
    }
    return x;
}