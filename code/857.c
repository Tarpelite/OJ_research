#include <stdio.h>
#include <stdlib.h>
int m,n;
int C(m,n)
{
    if(m==0||m==n||n==0) return 1;
    else return C(m-1,n-1)+C(m-1,n);
}


int main()
{
    scanf("%d%d",&m,&n);
    printf("%d",C(m,n));
    return 0;
}