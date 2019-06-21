#include<stdio.h>
#include<math.h>
#include <string.h>
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
int main()
{
	int m, n,t=1,i;
	scanf("%d %d", &n, &m);
	for (i = n - m + 1; i <= n; i++)t *= i;
	for (i = 1; i <= m; i++)t /= i;
	printf("%d", t);
}