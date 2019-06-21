#include<stdio.h>

int main()
{
	int f(int x);
	int n;
	scanf("%d", &n);
	n++;
	while(1)
	{
		if(f(n++))
		{
			printf("%d", n-1);
			break;
		}
	}
	return 0;
}

int f(int x)
{
	int i = 2, flag = 1;
	for(; i<=x/2; i++)
	{
		if(x % i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}