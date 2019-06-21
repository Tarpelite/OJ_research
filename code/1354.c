#include<stdio.h>
long long  A(long long x,long long  y)
{
    long long  rst=1;
    for(long long  i=y;i<=x;i++)
     rst*=i;
    return rst;
}

int main()
{
    long long  m,n;
    long long p;
    scanf("%lld%lld",&m,&n);
    if(n==0||m==0)
        printf("1");
    else
    {
        p=A(m,m-n+1)/A(n,1);
        printf("%lld",p);
    }
}