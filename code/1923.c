#include<stdio.h>

int main()
{
    int m, n, i;
    long long a=1, b=1, t=1;
    scanf("%d%d", &m, &n);
    for(i=1;i<=m;i++){
        a*=i;
    }
    for(i=1;i<=n;i++){
        b*=i;
    }
    for(i=1;i<=(m-n);i++){
        t*=i;
    }
    printf("%d", a/(b*t));
    return 0;
}