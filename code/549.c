#include<stdio.h>

int main(void)
{
    int n,m;
    long long a=1,b=1;
    scanf("%d%d",&m,&n);
    for(int i=n+1;i<=m;i++)
        a *= i;
    for(int i=1;i<=(m-n);i++)
        b *= i;
    long long c;
    c = a/b;
    printf("%lld",c);

    return 0;
}