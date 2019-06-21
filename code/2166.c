#include <stdio.h>
#include <stdlib.h>

long long factor(long long n)
{
    if(n>0)
        return n*factor(n-1);
    else
        return 1;
}

long long main()
{
    long long m,n;
    scanf("%lld %lld",&m,&n);
    printf("%lld",factor(m)/(factor(n)*factor(m-n)));
    return 0;
}