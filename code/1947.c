#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d%d",&n,&m);
    long long  ans = 1;
    long long ss  = 1;
    int i;
    for( i=n;i>=(n - m+1);i--)
    {
        ans*=i;
    }
    for( i=1;i<=m;i++)
    {
        ss*=i;
    }
    printf("%lld\n",ans/ss);
    return 0;
}