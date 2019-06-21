#include <stdio.h>
#include <stdlib.h>
int zhishu(int n)
{
    int i=2;
    for(;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;//不是质数
            break;
        }
    }
    if(i==n)
        return 1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        if(zhishu(n+i)==1)
        {
            printf("%d",n+i);
            break;
        }
    }
    return 0;
}