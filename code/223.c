#include <stdio.h>
#include <stdlib.h>

int main()
{
    double m, n, i, sum = 1, k;

    scanf("%lf %lf", &m, &n);

    k = n;

    for(i=1; i<=k; i++)
    {
        sum = sum * m / n;
        m = m-1;
        n = n-1;
    }
    printf("%.0f", sum);

    return 0;
}