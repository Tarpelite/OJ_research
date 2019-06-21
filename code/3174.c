#include <stdio.h>
long long a(long long m,long long n)
{
	int i;
	long long s;
	for(i=1,s=1;i<n+1;i++)
	{
		s=s*(m-i+1);
	}
	return s;
}
long long c(long long m,long long n)
{
	if(m==n)return 1;
	if(n==1)return m;	
	if(m<=13)return a(m,n)/a(n,n);
	return c(m-1,n-1)+c(m-1,n);
}
int main()
{
	long long m,n;
	scanf("%lld%lld",&m,&n);
	if(n>m)printf("%d",1);
	else if(n==0)printf("%d",1);
	else
	{
		printf("%lld",c(m,n));
	}
	return 0;
}