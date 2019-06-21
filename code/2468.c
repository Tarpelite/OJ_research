#include <stdio.h>
#include <string.h>
#include <math.h>
long long fac(int);
int main()
{
    int m,n;
    long long c;
    scanf("%d%d",&m,&n);
    c=fac(m)/(fac(n)*fac(m-n));
    printf("%lld",c);
    return 0;
    
}

long long fac(int x)
{
    int i;
    long long factor=1;
    if (x==0) {
        return 1;
    }
    for (i=1; i<=x; i++) {
        factor*=i;
    }
    return factor;
}