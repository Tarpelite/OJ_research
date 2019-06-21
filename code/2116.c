#include<stdio.h>
double fact(int);
int main()
{
    int m, n;
    double  x, y, z;
    scanf("%d%d",&m, &n);
    x=fact(m);
    y=fact(n);
    z=fact(m-n);
    printf("%.0lf",x/(y*z));
    return 0;
}

double fact(int n)
{
    int i;
    double p=1;
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}