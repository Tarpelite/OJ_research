#include <stdio.h>
int primenum(int a)
{
    int i,j;
    i=2;
    while (i<a)
    {
    j=a%i;
    if (j==0)
        {
        a++;
        i=2;
        }
    if (j!=0)
        i++;
    }
    return a;
}
int main()
{
    int b;
    scanf("%d",&b);
    primenum (b+1);
    printf("%d",primenum (b+1));
    return 0;
}