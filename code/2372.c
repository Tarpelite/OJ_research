#include <stdio.h>
#include <stdlib.h>
int a[105];
int n;
int fn(int l,int r)
{
	int result = 0;
	int i;

	for (i = l; i <= r; i++)
		result = result + a[i];
	return result % n;
}

int fm(int l, int r)
{
	int result = 1;
	int i;

	for (i = l; i <= r; i++)
	{
		result = (result * a[i]) % n;
	}
	return result % n;
}
int fh(int l, int r)
{
	int result;
	int i;

	result = a[l];
	for (i = l + 1; i <= r; i++)
		result = result ^ a[i];
	return result;
}
int main()
{
	int k;
	int l, r;
	int i, j;
	int min, max, temp1, temp2;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 0; i < k; i++)
	{
		scanf("%d %d", &l, &r);
		temp1 = fn(l, r);
		temp2 = fm(l, r);
		min = temp1 > temp2 ? temp2 : temp1;
		max = temp1 > temp2 ? temp1 : temp2;
		printf("%d\n", fh(min, max));
	}

	return 0;
}