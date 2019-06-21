#include<stdio.h>
double f(int x);

int main()
{
    int m, n, X;
    scanf("%d %d", &m, &n);
    X=f(m)/(f(n)*f(m-n));
    printf("%d", X);

    return 0;

}

double f(int x)
{
    int i;
    double f;
    f=1;
    for(i=1;i<=x;i++)
    f = f*i;

    return f;
}