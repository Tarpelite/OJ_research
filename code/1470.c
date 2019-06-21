#include<stdio.h>

int main()
{
    int n, m, i = 0, cj = 1;
    scanf("%d %d", &n, &m);
    for(i = 1; i <= m; i++)
    {
        cj = cj * n;
        n = n - 1;
    }
    for(i = 1; i <= m; i++)
    {
        cj = cj / i;
    }
    printf("%d", cj);
    return 0;
}