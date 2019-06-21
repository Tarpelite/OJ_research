#include <stdio.h>
int main()
{
	int n, m, i, x=1;
	scanf("%d%d", &n, &m);
	for(i = 1;i <= m;i++)
	{
		x=x*(n - i + 1) / i;
	}
	printf("%d",x);
	return 0;
}