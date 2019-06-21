#include <stdio.h>

long long C (int, int);

int main()
{
    int m, n;
    scanf ("%d%d", &m, &n);
    if (m == 0 || n == 0)
        printf ("0");
    else if (n > m)
        printf ("1");
    else
        printf ("%lld", C(m, n));
    return 0;
}

long long C (int m, int n){
    long long sum = 1;
    int i;
    for (i = n+1; i <= m; ++i)
        sum *= i;
    for (i = 1; i <= m-n; ++i)
        sum /= i;
    return sum;
}