#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	double fac();
	int m, n;
	scanf("%d %d", &m, &n);
	if (m == n) printf("1");
	else
	printf("%.0lf ", (fac(m) / fac(n)) / fac(m - n));
	
}

double fac(int x)
{
	if (x == 0) return 1;
	double sum = 1;
	for (int i = 1; i <= x; i++)
		sum = sum * i;
	return sum;
}