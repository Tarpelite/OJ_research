#include <stdio.h>
long long f(long long n)
{
    long long r=1, i;
    for(i=1; i<=n; i++)
        r*=i;
    return r;
}
long long main()
{
    long long m,n;
    scanf("%lld%lld",&m,&n);
    if(n==0)
        printf("0");
    else
        printf("%lld\n",f(m)/f(m-n)/f(n));
    return 0;
}