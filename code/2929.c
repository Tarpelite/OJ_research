#include <stdio.h>

int main()
{
    long long  m,n,
               i,
               sum1=1,sum2=1,sum;//c m 取 n

    scanf("%lld%lld",&m,&n);

    for(i = m; i >= (m-n+1); i--)
    {
        sum1*=i;
    }
    for(i = 1;i <= n;i++)
    {
        sum2*=i;
    }
    sum=sum1 / sum2;
    printf("%lld",sum);
    return 0;
}