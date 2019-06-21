#include<stdio.h>
#include<math.h>
#include <string.h>
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
int isp(int n)
{
	int i;
	if (n == 1)return 0;
	if (n == 2 || n == 3)return 1;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	n++;
	while (isp(n) != 1)n++;
	printf("%d", n);
}