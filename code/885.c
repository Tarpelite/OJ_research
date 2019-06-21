#include<stdio.h>

long long jie(int n)
{
    long long mul=1,i;
    for(i=n;i>0;i--)
    {
        mul*=i;
    }
    return mul;
}
int main()
{
    int m,n;
    long long num;
    scanf("%d%d",&m,&n);
    num=(jie(m))/(jie(n)*jie(m-n));
    printf("%lld",num);
    return 0;
}