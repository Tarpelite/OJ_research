#include<stdio.h>

int C(int,int);

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(n==0)
        putchar('0');
    else
        printf("%d",C(m,n));
    return 0;
}

int C(int m,int n)
{
    if(m==n)
        return 1;
    return m*C(m-1,n)/(m-n);
}