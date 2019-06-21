#include<stdio.h>
#include<math.h>
int zhishu(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    n++;
    while(zhishu(n)==0)
        n++;
    printf("%d",n);
    return 0;
}