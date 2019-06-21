#include <stdio.h>

int main()
{
    int m, n;
    int i, k=1;
    scanf("%d%d", &n, &m);
    for(i=n;i>=(n-m+1);i--){
       k = k * i;
    }
    for(i=1;i<=m;i++){
        k=k/i;
    }
    printf("%d", k);
    return 0;
}