#include<stdio.h>
long long fac(int x)
{
    int i=0;
    long long k=1;
    for(i=1;i<=x;i++)
    {
        k=k*i;
    }
    return k;
}
int main()
{
    int m=0;
    int n=0;
    long long p=0;
    scanf("%d%d",&m,&n);
    if(m==0||p==0)
    {
       p=0;
    }
    if(m<n&&m!=0&&n!=0)
    {
        p=1;
    }
    if(m>=n&&m!=0&&n!=0)
    {
        p=fac(m)/fac(n)/fac(m-n);
    }
    printf("%d",p);
    return 0;
}