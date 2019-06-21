#include <stdio.h>
long long j(long long);
int main()
{
	long long m,n;
	scanf("%lld%lld",&m,&n);
	printf("%lld",j(m)/(j(n)*j(m-n)));
	return 0;
}
long long j(long long x)
{
	if(x<=1)
	return 1;
	else
	return x*j(x-1);
}