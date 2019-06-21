#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, i, j;
    scanf("%d%d", &a, &b);
    for(i = 1, c = b; i < b; i++)
    {
        c = c * i;
    }
    for(j = 1, d = a, e = 1; j <= b; j++)
    {
       e = d * e;
       d--;
    }
    f = e / c;
    printf("%d", f);
    return 0;
}