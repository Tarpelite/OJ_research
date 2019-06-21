#include<stdio.h>
#include<string.h>

double f(double a);
double h(double a, double b);

int main()
{
    double m,n;
    int resu;
    scanf("%lf%lf", &m, &n );
    if(n==0||m==0)
    {
        printf("1");
        return 0;
    }
    else if(n>(m/2))
    {
        resu = h(n+1, m) / f(m-n) ;
        printf("%d", resu);
        return 0;
    }
    else
    {
        resu = h(m-n+1, m) / f(n);
        printf("%d", resu);
        return 0;
    }
}

double f(double a)
{
    int i;
    double resu=1;
    if(a==0) return 1.0;
    else
    {
        for(i=2; i<=a; i++)
        {
            resu*=i;
        }
        return resu;
    }
}

double h(double a, double b)
{
    int i;
    double resu=1.0;
    for(i=a; i<=b; i++)
    {
        resu*=i;
    }
    return resu;
}