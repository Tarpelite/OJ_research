#include<stdio.h>
#include<stdlib.h>
int nlr(int n, int l, int r, int[]);
int mlr(int n, int l, int r, int[]);
int hlr(int n, int l, int r, int[]);
int main(void)
{
	int n, k, index, l, r, min, max, midm, midn;
	int p[100];
	scanf("%d%d", &n, &k);
	for (index = 0; index < n; index++)
		scanf("%d", &p[index]);
	for (index = 0; index < k; index++)
	{
		scanf("%d%d", &l, &r);
		midm = mlr(n, l, r, p);
		midn = nlr(n, l, r, p);
		max = midm >= midn ? midm : midn;
		min = midm >= midn ? midn : midm;
		printf("%d\n", hlr(n, min, max, p));

	}

	system("pause");
	return 0;
}
int nlr(int n, int l, int r, int p[])
{
	int ans = 0;
	for (; l <= r; l++)
	{
		ans += p[l];
		ans %= n;
	}

	return ans;

}
int mlr(int n, int l, int r, int p[])
{
	int ans = 1;
	for (; l <= r; l++)
	{
		ans *= p[l];
		ans %= n;
	}
	return ans;

}
int hlr(int n, int l, int r, int p[])
{
	int ans = 0;
	for (; l <= r; l++)
		ans = ans ^ p[l];

	return ans;

}