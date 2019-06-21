#include<stdio.h>

int c(int m,int n)
{
    if(n<m||n<1||m<1)
    {
        return 0;
    }
    if(m==1)
    {
        return n;
    }
    if(m==n)
    {
        return 1;
    }
    return c(m,n-1)+c(m-1,n-1);
}

int main()
{
     int m,n;
     scanf("%d%d",&m,&n);
     printf("%d",c(n,m));

    return 0;
}