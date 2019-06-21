#include <stdio.h>

int zhishu(int x);

int main()
{
	int n, i;
	
	scanf("%d", &n);
	
	i = n + 1;
	while(1)
	{
		if(zhishu(i))
		{
			printf("%d", i);
			return 0;
		}
		else
		{
			i++;
		}
	}
	
	return 0;
}

int zhishu(int x)
{
	for(int i = 2; i < x; i++)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}