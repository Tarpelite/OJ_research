#include<stdio.h>

int main()
{
    int m, n, i, ans = 1;

    scanf("%d%d", &m, &n);

    for(i = 0; i < n; i++)
    {
        ans = ans * (m - i) / ( i + 1);
    }

    printf("%d", ans);

    return 0;
}