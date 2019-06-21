#include<stdio.h>
int main()
{
    long long a,b,m,n;
    scanf("%lld%lld",&m,&n);
    b=1;
    m=m-n+1;
    for(a=1;a<=n;a++)
    {
        b=b*m;
        b=b/a;
        m=m+1;
    }
        printf("%lld",b);

}