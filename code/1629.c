#include <stdio.h>
#include <stdlib.h>

long long factorial(long long);

int main()
{
    long long m,n;
    long long answer;
    scanf("%lld %lld",&m,&n);
    answer = factorial(m) / (factorial(n) * factorial(m - n));
    printf("%lld",answer);
    return 0;
}

long long factorial(long long num)
{
    if(num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}