#include<stdio.h>

int main()
{
    int m, n, i, Nn = 1, Mm = 1;
    scanf ("%d%d", &m, &n);

    for (i = 0; i < n; i++)
    {
        Nn *= (i + 1);
    }
    for (i = m; i > m - n; i--)
    {
        Mm *= i;
    }
    if (m == 0)
    {
        printf ("0");
    }
    else if (n == 0)
    {
        printf ("1");
    }
    else
    {
        printf ("%d", Mm / Nn);
    }
    return 0;
}