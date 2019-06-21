#include<stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int a[10005];
int N(int l,int r,int n,int a[])
{
    int i,sum=0;
    for(i=l;i<=r;i++)
    {
        sum=sum+a[i];
    }
    sum=sum%n;
    return sum;
}
int M(int l,int r,int n,int a[])
{
    int i,product=1;
    for(i=l;i<=r;i++)
    {
        product=((product%n)*(a[i]%n))%n;
    }
    return product;
}
int H(int l,int r,int a[])
{
    int i,either;
    i=l;
    either=a[i];
    for(;i<r;i++)
    {
        either=either^a[i+1];
    }
    return either;
}

int main()
{
    int n,K,i,j,l,r,sum,product,either,min,max;

    scanf("%d %d",&n,&K);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=K;j++)
    {
        scanf("%d %d",&l,&r);
        sum=N(l,r,n,a);
        product=M(l,r,n,a);
        min=min(sum,product);
        max=max(sum,product);
        either=H(min,max,a);
        printf("%d\n",either);
    }
    return 0;
}