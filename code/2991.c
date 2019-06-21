#include <stdio.h>
#include <stdlib.h>
long long  f(int n)
{
    if(n==0)return 1;
    else return n*f(n-1);
}

int main()
{
    int n,m;
    int x;
    scanf("%d %d",&m,&n);
    x=f(m)/(f(n)*f(m-n));
    printf("%d",x);
    return 0;
}