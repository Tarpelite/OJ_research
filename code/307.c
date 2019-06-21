#include<stdio.h>
int N(int,int);
int M(int,int);
int H(int,int);
int n,k,l,r;

int a[1008];
int main()
{
    long long b,c,x;
    scanf("%d%d",&n,&k);
    for(int i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(int j=1;j<=k;j++)
    {
        scanf("%d%d",&l,&r);
        c=N(l,r);
        b=M(l,r);
        if(c<=b)
            x=H(c,b);
        else
            x=H(b,c);
        printf("%lld\n",x);
    }
    return 0;
}
int N(int l,int r)
{
    int sum=0;
    for(int i=l;i<=r;i++)
    {
        sum+=a[i];
    }
    sum=sum%n;
    return sum;
}
int M(int l,int r)
{
    int product=1;
    for(int i=l;i<=r;i++)
    {
        product=(product%n*(a[i]%n))%n;
    }
    product=product%n;
    return product;
}
int H(int l,int r)
{
    int j=a[l];
    for(int i=l+1;i<=r;i++)
    {
        j=j^a[i];
    }
    return j;
}