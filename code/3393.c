#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    long long int x = 1, y = 1, z = 1;
    int i;
    for(i = 1; i <= m; i++)
    {
        x = x * i;
    }
    for(i = 1; i <= n; i++)
        y = y * i;
    for(i = 1; i <= m-n; i++)
        z = z * i;
    int res;
    res = x / (y * z);
    printf("%d", res);
    return 0;
}