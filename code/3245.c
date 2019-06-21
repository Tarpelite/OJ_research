#include <stdio.h>
#include <stdlib.h>
int cnm(int,int);
int main()
{
    int m,n;

    scanf("%d %d",&m,&n);//m为总数

    printf("%d",cnm(n,m));

    return 0;
}

int cnm(int n,int m)
{   if(m<n||m<1||n<1)
        return 0;
    if(m==n)
        return 1;
    if(n==1)
        return m;
    return cnm(n,m-1)+cnm(n-1,m-1);
}