#include<stdio.h>
int prime[26003] = {2};
void print_prime(int n)
{
	int i,j,m=1,is_prime;
	for(i=3; i<+n; i+=2)
	{
		for(is_prime=1,j=0;prime[j] * prime[j] <= i; j++)
		{
			if(i % prime[j] == 0)
			{
				is_prime = 0;
				break;
			}
		}
		if(is_prime)
		{
			prime[m++] = i;
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	print_prime(110000);
	for(int i=0; i<26003; i++)
	{
		if(n == prime[i])
		{
			printf("%d",prime[i+1]);
		}
	}
}