#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int min();
	int max();
	int N();
	long int M();
	int H();

	int n; int k; int a[100000] = { 0 };
	int l[101], r[101];
	scanf("%d %d", &n, &k);
	for (int i = 0; i <= n - 1; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= k; i++)
	{
		scanf("%d %d", &l[i], &r[i]);

	}

	for (int i = 1; i <= k; i++)
		printf("%d\n", H(min(N(l[i], r[i], a, n), M(l[i], r[i], a, n)), max(N(l[i], r[i], a, n), M(l[i], r[i], a, n)), a, n));

}

int min(int x, int y)
{
	return x < y ? x : y;
}

int max(int x, int y)
{
	return x > y ? x : y;
}

int N(int l, int r, int a[], int n)
{
	int sum = 0;
	for (int i = l; i <= r; i++)
		sum = sum + a[i];
	return sum % n;
}

long int M(int l, int r, int a[], int n)
{
	long int sum = 1;
	for (int i = l; i <= r; i++)
		sum = (sum * a[i])%n;
	return sum % n;
}

int H(int l, int r, int a[], int n)
{
	int s = a[l];
	for (int i = l + 1; i <= r; i++)
		s = s ^ a[i];
	return s;
}