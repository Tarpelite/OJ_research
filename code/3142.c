#include<stdio.h>
int main()
{
    int m, n;
    double n1, m1, p1;
    double fact(int n);

    scanf("%d%d", &n, &m);
    n1=fact(n);
    m1=fact(m);
    p1=fact(n-m);
    printf("%.0lf", n1/(m1*p1));
}
double fact(int n)
{
    int i;
    double sum;
    sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}