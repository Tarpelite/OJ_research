#include <stdio.h>
long long f(int);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	long long t;
	t=f(m)/(f(n)*f(m-n));
	if(m==0||n==0)
	{
		printf("0");
	}
	else
		printf("%lld",t);
	return 0;
}

long long f(int x)
{
	long long i, f = 1;
	for(i = 2; i <= x; i++)
	{
		f = f * i;
	}
	return f;
}