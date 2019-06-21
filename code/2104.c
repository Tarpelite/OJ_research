#include<stdio.h>
long long fac(long long n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	return n*fac(n-1);
}
int main()
{
	long long n, m, t;
	scanf("%lld%lld", &n, &m);
	t=fac(n)/(fac(n-m)*fac(m));
	printf("%d", t);
	//printf("%d",fac(5));
	return 0;
}