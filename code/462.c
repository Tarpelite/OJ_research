#include <stdio.h>
int main()
{
	int a[100005] = { 0 };
	int k, n, b=0, c;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &c);
		a[c]++;
	}

	scanf("%d", &k);

	for (int i = 99999; i >= 1; i--)
	{
		if (a[i] != 0 && b != k)b++;
		if (k == b)
		{
			printf("%d %d", i, a[i]);
			break;
		}
	}

}