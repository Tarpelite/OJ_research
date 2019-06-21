#include<stdio.h>
int zhishu(int);
int main()
{
    int n,m,i;
    scanf("%d",&n);
    m=n+1;
    while(zhishu(m))
        m++;
    printf("%d",m);
}
int zhishu(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            return 1;
    }
    return 0;
}