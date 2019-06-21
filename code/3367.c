#include <stdio.h>
int main()
{
    int m, n, i, a=1, b=1;
    scanf("%d%d", &m, &n);
    for(i=0;i<n;i++){
        a*=m-i;
        b*=i+1;
    }
    printf("%d",a/b);
    return 0;
}