#include <stdio.h>
long long f(long long);
int main()
{
    long long m,n,x;
    scanf("%lld%lld",&m,&n);
    f(m);f(n);f(m-n);
    x=f(m)/(f(m-n)*f(n));
    printf("%lld",x);
    return 0;
}

long long f(long long u)
{
    if(u<=1)
        return 1;
    return u*f(u-1);
}