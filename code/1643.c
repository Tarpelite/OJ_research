#include<stdio.h>
long long f(long long);
int main()
{
    long long m,n,out;
    scanf("%lld%lld",&m,&n);

    out=f(m)/(f(n)*f(m-n));
    printf("%lld",out);
}
long long f(long long x)
{
    if(x==0)
        return 1;
    if(x==1)
        return 1;
    return x*f(x-1);
}