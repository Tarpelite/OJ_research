#include <stdio.h>

int fac(int a, int b)
{
    if(a == b || b == 0) return 1;
    else return fac(a-1,b-1)+fac(a-1,b);
}
int main()
{
    int m = 0, n = 0;
    scanf("%d%d",&m,&n);
    printf("%d",fac(m,n));
}