#include <stdio.h>
#include <math.h>

long long fx(long long n)
{
    int j = 0;
    for (j = 2; j <=sqrt (n); j++)
    {
        if (n%j == 0)
        {
            return 0;
        }
    }
    return 1;
}

long long main()
{
    long long m, n;
    scanf("%lld",&n);
    for(m=n+1; ; m++)
    {
        if(fx(m)==1)
        {
            printf("%lld",m);
            break;
        }
    }
    return 0;
}