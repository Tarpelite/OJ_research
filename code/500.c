#include <stdio.h>
int is_prime(int);
int main()
{
	int n, flag = 0;
	scanf("%d", &n);
	while(flag == 0)
	{
		n++;
		flag = is_prime(n);
	}
	printf("%d", n);
	return 0;
}

int is_prime(int x)
{
	int i;
	for(i = 2; i * i <= x; i++)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}