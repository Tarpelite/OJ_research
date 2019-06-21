#include<stdio.h>
#include<math.h>
int zhishu(int x)
{
    int i=2,a=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            a++;
            break;
        }
    }
    if(a==0)
        return 0;
    else
        return 1;

}
int main()
{
    int n,i=2;
    scanf("%d",&n);
    if(n==2)
    {
        putchar('3');
        return 0;
    }
    n=n+1;
    for(n=n+1;1;n++)
    {

        if(zhishu(n)==0)
        {
            printf("%d",n);
            break;
        }

    }

    return 0;

}