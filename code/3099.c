#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long pailie(int a, int b);
	int a, b;
		scanf("%d %d", &a, &b);
	printf("%lld ", pailie(a,b));
	
}

long long pailie(int a, int b)
{
	int i;
	long long int sum = 1;

	if (b < a - b)
		b = a - b;

	for (i = b + 1; i <= a; i++)
		sum *= i;

	for (i = 1; i <= a - b; i++)
		sum /= i;

	return sum;
}