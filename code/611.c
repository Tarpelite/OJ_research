#include<stdio.h>

double f(int a)
{
    int i=1;
    double sum=1;
    while(i<=a) {sum=sum*i;i++;}
    return sum;
}

int main()
{
    int m,n;
    double x;
    scanf("%d%d",&m,&n);
    if(m==0||n==0) printf("0");
    else
    {
        x=f(m)/f(n)/f(m-n);
        printf("%.0lf",x);

    }
    return 0;
}