#include <stdio.h>

int main()
{
    int a, b, m, n;

    scanf("%d%d", &m, &n);

    if(n==0)
    {
        printf("0");
        return 0;
    }

    if(m==n)
    {
        printf("1");
        return 0;
    }

    if(n<m-n)
        n=n;
    else
        n=n-m;

    if(n==0)
        return 1;

    a=1;b=1;

    for(int i=m; i>=m-n+1;i--)
        a=a*i;
    for(int i=1;i<=n;i++)
        b=b*i;

    printf("%d", a/b);

    return 0;

}