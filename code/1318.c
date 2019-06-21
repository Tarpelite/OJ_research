#include <stdio.h>
long long C(int,int);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	long long c;
	c=C(m,n);
	printf("%lld",c);
	return 0;
}

long long C(int m,int n)
{
	if(m==1||m==n)
	return 1;
	if(n==1)
	return m;
	return C(m-1,n)+C(m-1,n-1);
}