#include <stdio.h>
int N(int, int);
int M(int, int);
int H(int, int);
int min(int, int);
int max(int, int);
int n, A[100];
int main()
{
	int K, i, l, r, x;
	scanf("%d%d", &n, &K);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	for(i = 0; i < K; i++)
	{
		scanf("%d%d", &l, &r);
		x = H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
		printf("%d\n", x);
	}
	return 0;
}

int N(int l, int r)
{
	int sum = 0, i;
	for(i = l; i <= r; i++)
	{
		sum = sum + A[i];
	}
	sum = sum % n;
	return sum;
}

int M(int l, int r)
{
	int pro = 1, i;
	for(i = l; i <= r; i++)
	{
		pro = pro * A[i] % n;
	}
	pro = pro % n;
	return pro;
}

int H(int l, int r)
{
	int exor = 0, i;
	for(i = l; i <= r; i++)
	{
		exor = exor ^ A[i];
	}
	return exor;
}

int min(int x, int y)
{
	int m;
	m = x ^ ((x ^ y) & -(x > y));
	return m;
}

int max(int x, int y)
{
	int m;
	m = x ^ ((x ^ y) & -(x < y));
	return m;
}