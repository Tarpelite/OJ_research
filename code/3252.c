#include <stdio.h>
long long a(int m,int n)
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
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%lld",a(m,n)/a(n,n));
	return 0;
}