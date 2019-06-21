#include<stdio.h>

int main()
{
	int m, n, a1, a2;
	int f(int max, int min);
	scanf("%d %d", &m, &n);
    a1 = f(m, m-n+1); 
	a2 = f(n, 1);
	printf("%d", a1/a2);
	return 0;
}

int f(int max, int min)
{
	int i, re = 1;
	for(i=min; i<=max; i++)
	{
		re *= i;
	}
	return re;
}