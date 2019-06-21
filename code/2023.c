#include<stdio.h>

int main()
{
	long long int m , n , i , M , N , S , k;
	scanf("%ld%ld",&m,&n);
	M = 1;
	N = 1;
	S = 1;
	if(m > n)
	{
		m = m;
		n = n;
	}
	if(m <= n)
	{
		i = n;
		n = m;
		m = i;
	}
	if(m != 0&&n != 0)
	{
	for(i = 1;i< m + 1;i++)
	{
		M = M * i;
	}
	i =1;
	for(i = 1;i <= n;i++)
	{
		N = N * i; 
	}
	i = 1;
	for(i= 1;i < m - n + 1;i++)
	{
		S = S * i;
	}
	k = M / (N * S); 
	}
	else if(n == 0 && m != 0)
	{
		k = 0;
	}
	else if(n == 0 && m == 0)
	{
		k = 1;
	}
	printf("%ld",k);
	return 0;
}