#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, i, s;
    s=1;
    scanf("%d%d", &m, &n);
    for(i=1;i<=n;i++){
        s = s*(m - n +i)/i;
    }
    printf("%d", s);
    return 0;
}