#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int f(int x);
int main()
{
	int j, n;
	scanf("%d", &n);
	for (j = (n + 1); f(j) == 1; j++);
	printf("%d", j);
}
int f(int x)
{
	int i;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			break;
	}
	if (i < x)
		return 1;
	else
		return 0;
}