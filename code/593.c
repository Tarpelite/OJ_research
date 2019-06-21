#include<stdio.h>
int isprime(int i);

int main()
{
    int n, i;

    scanf("%d", &n);

    i = n + 1;

    while(isprime(i) != 1)
    {
        i++;
    }

    printf("%d", i);

    return 0;
}

int isprime( int i)
{
    int k;

    for ( k = 2; k < i; k++)
    {
        if (i % k == 0)
        {
            return 0;
        }

    }

    return 1;
}