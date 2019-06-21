#include <stdio.h>

int array[100] = {0}, n;
int N(int a, int b);
int M(int c, int d);
int H(int e, int f);

int main()
{
    int k, min, max, l, r, i, f1, f2, b[100];

    scanf("%d%d", &n, &k);
    for(i = 0; i <= n - 1; i++)
        scanf("%d", &array[i]);

    for(i = 0; i <= k - 1; i++)
    {
        scanf("%d%d", &l, &r);
        f1 = N(l, r);
        f2 = M(l, r);
        if(f1 != f2)
        {
            max = f1 > f2? f1 : f2;
            min = f1 > f2? f2 : f1;
        }
        else
        {
            max = f1;
            min = f2;
        }
        b[i] = H(min, max);
    }
    for(i = 0; i <= k - 1; i++)
        printf("%d\n", b[i]);

    return 0;
}
int N(int a, int b)
{
    int i, total = 0;
    for(i = a; i <= b; i++)
        total += array[i];
        total = total % n;

    return total;
}
int M(int c, int d)
{
    int i;
    long long total = 1;
    for(i = c; i <= d; i++)
    {
        total = total % n;
        total = total * (array[i] % n);
        total = total % n;
    }

    return total;
}
int H(int e, int f)
{
    int i, total = array[e];
    for(i = e + 1; i <= f; i++)
        total = array[i] ^ total;

    return total;
}