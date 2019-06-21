#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isprime(int n)
{
    int np = (int)(sqrt(n) + 1), i;
    for (i = 2;i<np;i++)
    {
        if (n % i == 0)return 0;
    }
    return 1;
}
int main()
{
    int x;
    scanf ("%d",&x);
    if (x == 2)x = 3;
    else while(!isprime(x += 2));
    printf("%d\n",x);
    return 0;
}