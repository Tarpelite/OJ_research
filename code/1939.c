#include <stdio.h>

int main()
{
	int m, n, i, a=1, b=1;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)
	{
		b*=i;
	}
	for(i=n-m+1;i<=n;i++)
	{
		a*=i;
	}
	printf("%d",a/b);
	return 0;
}