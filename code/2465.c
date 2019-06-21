#include<stdio.h>
#define MAX(x, y)  x>y?x:y
#define MIN(x, y)  x<y?x:y
int main()
{
	int m, n, max, min;
	long long int mul1=1, mul2=1;
	scanf ("%d%d", &m, &n);
	max=MAX(n, m-n);
	min=MIN(n, m-n);
	for (int i=max+1;i<=m;i++)
		mul1*=i;
	for (int i=1;i<=min;i++)
		mul2*=i;
	printf ("%lld", mul1/mul2);
	return 0;
}