#include <stdio.h>

int main()
{
    int m,n,res,i;
    res = 1;
    scanf("%d%d",&m,&n);
    for(i = 1;i<=n;i++)
    {
        res = res*(m-n+i)/i;
    }
    printf("%d",res);
}