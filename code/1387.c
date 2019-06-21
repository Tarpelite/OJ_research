#include<stdio.h>
int f(int x)
{
    if(x==1) return 1;
    else return x*f(x-1);
}
int g(int x,int n)
{
    int y;
    for(y=1;n>0;n--,x--)
        y=y*x;
    return y;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",g(m,n)/f(n));
    return 0;
}