#include<stdio.h>
long long  A(int x)
{
    long long  rst=1;
    for(int i=1;i<=x;i++)
     rst*=i;
    return rst;
}

int main()
{
    int m,n;
    long long p;
    scanf("%d%d",&m,&n);
    p=A(m)/(A(n)*A(m-n));
    printf("%lld",p);
}