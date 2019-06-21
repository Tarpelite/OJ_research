#include <stdio.h>
#include <stdlib.h>
int zuheshu(int m,int n)
{
    if(n==m)
        return 1;
    else if(n==0)
        return 1;
    else if(n==1)
        return m;
    else
        return zuheshu(m-1,n-1)+zuheshu(m-1,n);
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",zuheshu(m,n));
    return 0;
}