#include <stdio.h>
#include<stdlib.h>
int num[100050];
int main(void)
{
	int n, x, a, xt;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		num[a]++;
	}
	scanf("%d", &x);
	int i = 1, j = 100000;
	while (i <= x)
	{
		if (num[j] != 0)
		{
			xt = j;
			i++;
		}
		j--;
	}
	printf("%d %d", xt, num[xt]);
	return 0;
}