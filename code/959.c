#include<stdio.h>
#define MAX 100

int n,a[MAX];
int N(int l,int r)
{
    int sum=0;
    while(l<=r)
    {
        sum=(sum%n+a[l]%n)%n;
        l++;
    }
    return (sum%n);
}
int M(int l,int r)
{
    int sum=1;
    while(l<=r)
    {
        sum=((sum%n)*(a[l]%n))%n;
        l++;
    }
    return (sum%n);
}
int H(int l,int r)
{
    int sum;
    sum=a[l];
    l++;
    while(l<=r)
    {
        sum=sum^a[l];
        l++;
    }
    return (sum);
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
    if(a>b)
        return b;
    else
        return a;
}

int main()
{
    int i=0,x[MAX],y[MAX],k;

    scanf("%d%d",&n,&k);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    while(i<k)
    {
        scanf("%d%d",&x[i],&y[i]);
        i++;
    }

    for(i=0;i<k;i++)
        printf("%d\n",H(min(N(x[i],y[i]),M(x[i],y[i])),max(N(x[i],y[i]),M(x[i],y[i]))));

    return 0;
}