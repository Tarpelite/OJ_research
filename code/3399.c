#include<stdio.h>
long long c(long long,long long);
long long main()
{
    long long n,m;

    scanf("%lld%lld",&m,&n);
    printf("%lld\n",c(m,n));
	return 0;
 }
long long c(long long m,long long n)
{
    if(n==0||m==n)
        return 1;
    else if(n==1)
        return m;


    else return c(m-1,n-1)+c(m-1,n);
}