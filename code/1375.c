#include <stdio.h>
int main()
{
	int m, n, i;
	long long A=1, B=1, C=1, D;
	scanf("%d%d", &m, &n);
	for(i=2;i<=m;i++)
	{
		A=A*i;
	}
	for(i=2;i<=n;i++)
	{
		B=B*i;
	}
	for(i=2;i<=m-n;i++)
	{
		C=C*i;
	}
	D=A/(B*C);
	printf("%lld", D);
	return 0;
}