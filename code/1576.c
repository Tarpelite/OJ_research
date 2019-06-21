#include<stdio.h>
int n,a[105];
int N (int l,int r)
{
    int sum=0;
    while(l<=r)
    {
        sum=sum%n+a[l]%n;
        l++;
    };
    return (sum%n);
}
int M (int l,int r)
{
    int sum=1;
    while(l<=r)
    {
        sum=((sum%n)*(a[l]%n))%n;
        l++;
    };
    return (sum%n);
}
int H (int l,int r)
{
    int sum=a[l];
    while(l+1<=r)
    {
        sum=sum^a[l+1];
        l++;
    };
    return sum;
}
int min(int a,int b)
{
    if(a>b)return b;
    return a;
}
int max(int a,int b)
{
    if(a<b)return b;
    return a;
}
int main()
{
    int k,b[105],c[105],i=0;
    scanf("%d %d",&n,&k);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    };
    i=0;
    while(i<k)
    {
        scanf("%d %d",&b[i],&c[i]);
        i++;
    };
    i=0;
    while(i<k)
    {
        printf("%d\n",H(min(N(b[i],c[i]),M(b[i],c[i])),max(N(b[i],c[i]),M(b[i],c[i]))));
        i++;
    };



    return 0;
}