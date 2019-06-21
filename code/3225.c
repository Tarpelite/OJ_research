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
int main()
{
	long long m,n;
	scanf("%lld%lld",&m,&n);
	if(n>m)printf("%d",1);
	else if(n==0)printf("%d",1);
	else
	{
		printf("%lld",a(m,n)/a(n,n));
	}
	return 0;
}