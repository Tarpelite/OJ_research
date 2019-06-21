#include<stdio.h>
int zhishu(int x);
int main()
{
    int n;
    scanf("%d",&n);
    n=n+1;
    while(zhishu(n)==0)
    {
        n=n+1;
    }
    printf("%d",n);
    return 0;
}
int zhishu(int x)
{
    int m,b,k=1;
    for(m=2;m<x;m++)
    {
        b=x%m;
        if(b==0)
        {
           k=0;
           break;
        }
    }
    return k;
}