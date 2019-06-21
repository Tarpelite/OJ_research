#include <stdio.h>
unsigned long long jc(unsigned long long i)
{
	unsigned long long res=1;
	for(;i>1;i--) res*=i;
	return res;
}
unsigned long long c(unsigned long long m,unsigned long long n)
{
	unsigned long long a,b,c;
	unsigned long long res;
	a=jc(m);
	b=jc(n);
	c=jc(m-n);
	res=a/(b*c);
	return res;
}
int main()
{
	unsigned long long m,n,fulao;
	scanf("%lld %lld",&m,&n);
	fulao=c(m,n);
	printf("%llu",fulao);
	return 0;
}