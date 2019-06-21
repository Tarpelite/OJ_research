#include <stdio.h>
#include <math.h>

int isprime(int k)
{
    int i = 2;
    for(i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n = 0, i = 0;
    scanf("%d",&n);
    for(i = n + 1; i <= 1000000; i++)
    {
        if(isprime(i))
        {
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}