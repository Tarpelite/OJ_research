#include <stdio.h>
#include <stdlib.h>

int z(int);
int main()
{
    int n;
    scanf("%d",&n);
    n=n+1;
    while (z(n)!=1)
        n=n+1;
    printf("%d",n);
    return 0;
}

int z(int x)
{
    int i,t;
    t=(int)sqrt(x);
    for (i=2;i<=t;i++)
    if ((x%i)==0) { return 0;}
    return 1;
}