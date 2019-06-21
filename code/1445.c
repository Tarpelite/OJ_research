#include <stdio.h>
int zhishu(int);
int main()
{
    int n,m,i;
    scanf("%d",&n);
    for(i=1; ;i++)
    {
        if(zhishu(n+i)==1)
            break;
    }
    printf("%d",n+i);
    return 0;
}
int zhishu(int a)
{
    int j;
    for(j=2;j<a/2+1;j++)
    {
        if(a%j==0)
            return 0;
    }
    return 1;
}