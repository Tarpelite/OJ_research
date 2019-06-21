#include<stdio.h>
long long f(long long x)
{
	long long i=1,s=1;
	while(i<=x){
		s=s*i;
		i++;
	}
	return s;
}
int main()
{
	long long m,n,s;
	scanf("%lld%lld",&m,&n);
	s=f(m)/(f(n)*f(m-n));
	printf("%lld",s);
	return 0;
}