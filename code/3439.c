#include <stdio.h>
int main(void)
{
	int i, m, n, item;
	while (scanf("%d%d", &m, &n) != EOF)
	{
		item = 1;
		if (n == 0)
		printf("1\n");
		else
		{
			for (i = 1;i <= n;i++)
			{
				item = item*m / i;
				m--;
			}
			printf("%d\n", item);
			break;
		}
	}
	return 0;
}