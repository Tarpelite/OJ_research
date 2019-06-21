#include <stdio.h>

int multi(int a, int b);

int main()
{
    int m, n, result = 1, i, son, mother = 1;

    scanf("%d%d", &m, &n);

    son = multi(m, n);
    for(i = 1; i <= n; i++)
        mother *= i;

    printf("%d", son / mother);

    return 0;
}
int multi(int a, int b)
{
    int i, delta = 1;
    for(i = a; i >= a - b + 1; i--)
        delta *= i;
    return delta;
}