#include<stdio.h>

long long fact(long long n)
{
	long long k=1;
	for(long long i=1;i<=n;i++) 
	k*=i;
	return k;
}

int main()
{
	long long m,n;
	scanf("%lld%lld",&m,&n);
	if(m<0||n<0) printf("0");
	else 
	{
		long long a= fact(m);
		long long b=fact(n);
		long long c=fact(m-n);
		printf("%d",a/b/c);
	}
	return 0;
}