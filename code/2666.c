#include <stdio.h>
double fact(int n);
double fact(int n)
{
    int i;
    double product;
    product=1;
    for(i=1; i<=n; i++)
    {
        product = product*i;
    }
    return product;
}
int main()
{
    int i, n, m,x;
    double n1, m1, o1;
    scanf ("%d%d",&n,&m);
    n1=fact(n);
    m1=fact(m);
    o1=fact(n-m);
    x=n1/(m1*o1);
    printf ("%d",x);
}