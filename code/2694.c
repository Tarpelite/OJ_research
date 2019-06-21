#include<stdio.h>
long long jc(long long n)
{
	long long i,a=1;
	for(i=1;i<=n;i++)
	a=a*i;
	return a;
}

int main()
{
	long long m,n,C;
	scanf("%lld%lld",&m,&n);
	if(m==0)
	printf("1");
	else if(m<n)
	printf("1");
	else
	{
	C=jc(m)/jc(n)/jc(m-n);
	printf("%lld",C);
    }
	return 0;
}