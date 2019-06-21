#include<stdio.h>
double f(unsigned long n);
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    double shang,xia1,xia2;
    shang=f(m);
    xia1=f(n);
    xia2=f(m-n);
    xia1=xia1*xia2;
    double de;
    de=shang/xia1;
    printf("%.f",de);
    return 0;
}

double f(unsigned long n)
{
    if(n<=1)
        return 1;
    return(n*f(n-1));
}