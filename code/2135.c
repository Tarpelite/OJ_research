#include<stdio.h>
long long JC(long long);
int main()
{
	long long m,n,out;
	scanf("%lld%lld",&n,&m);
	out=JC(n)/(JC(m)*JC(n-m));
	printf("%lld",out);
	return 0;
}

long long JC(long long x)
{
	if(x==1||x==0)
		return 1;
	return x*JC(x-1); 
}