#include <stdio.h>


int isPrime(int a);


int main()
{
	int n = 0, i = 0;

	scanf("%d", &n);

	for (i = n+1;; i++)
	{
		if (isPrime(i) == 1)
		{
			printf("%d", i);
			return 0;
		}
	}
	return 0;
}

int isPrime(int a)
{
	int i = 0;
	for (i = 2; i < a; i++)
	{
		if (a%i == 0)
			return 0;
	}
	return 1;
}