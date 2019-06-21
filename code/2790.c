#include<stdio.h>
#include<math.h>
#include <string.h>
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
int n, a[65536];
int N(int l, int r)
{
	int s = 0; int j;
	for (j = l; j <= r; j++)s = (s+a[j]) % n;
	return s;
}
int M(int l, int r)
{
	int p = 1; int j;
	for (j = l; j <= r; j++)p = (p*a[j]) % n;
	return p;
}
int H(int l, int r)
{
	int o = a[l]; int j;
	for (j = l + 1; j <= r; j++)o = o ^ a[j];
	return o;
}
int main()
{
	int K, l[65536], r[65536], i;
	scanf("%d%d", &n, &K);
	for (i = 0; i <= n - 1; i++)scanf("%d", &a[i]);
	for (i = 1; i <= K; i++)scanf("%d%d", &l[i], &r[i]);
	for (i = 1; i <= K; i++)printf("%d\n", H(min(N(l[i], r[i]), M(l[i], r[i])), max(N(l[i], r[i]), M(l[i], r[i]))));
}