#include<stdio.h>
int c(int m,int n);
int main()
{
    int m,n,x;
    scanf("%d%d",&m,&n);
    x=c(n,m);
    printf("%d",x);
    return 0;
}
int c(int n,int m)
{
    if(n==0)
        return 1;
    else if(n==m)
        return 1;
    else
        return c(n,m-1)+c(n-1,m-1);
}