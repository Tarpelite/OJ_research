#include<stdio.h> 


long long jx(long long x)
{
	long long y =1;
	long long i;
	for (i=1;i<=x;i++)
	{
		y = y * i;
	}
	return y;
}

int main()
{
	long long m,n;
	scanf("%lld %lld", &m,&n);  
	
	long long c;
	c = jx(m) / (jx(n) * jx(m-n));
	
	
	
	printf("%lld\n",c);
	
	
	
	return 0;	
	
}