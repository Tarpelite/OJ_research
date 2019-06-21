#include<stdio.h>

int combine(int,int);

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);

    printf("%d",combine(n,m));
    return 0;
}

int combine(int n,int m)
{
    if(n==m) return 1;
    if(n==1) return m;
    else return combine(n,m-1)+combine(n-1,m-1);
}