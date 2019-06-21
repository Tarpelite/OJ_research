#include <stdio.h>
#include <math.h>

int isprime(int n)
{
    int i,a;
    a=sqrt(n)+1;
    for (i=2;i<a;i++)
        if (n%i==0) return 0;
        return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (!isprime(++n) );
    printf("%d\n",n);
 return 0;
}