#include <stdio.h>
int main()
{
	int a[100005] = { 0 };
	int k = 0;
	int n;
	int b,c;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&c);
		a[c]++;
	}
	scanf("%d", &b);
	for (int i = 99999; i >= 1; i--)
	{
		if (a[i] != 0&&k!=b)k++;
		if (k == b)
		{
			printf("%d %d", i, a[i]);
			break;
		}
	}
}