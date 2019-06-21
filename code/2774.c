#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,m,com,fac1=1,fac2=1;
    scanf("%lld %lld",&n,&m);
    for(int i=n;i>n-m;i--)
        fac1*=i;
    for(int i=1;i<=m;i++)
        fac2*=i;
    com=fac1/fac2;
    printf("%ld",com);
    return 0;
}