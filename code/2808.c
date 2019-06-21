#include<stdio.h>

#define N 100008
int a[N] = {0};
int prime[50000];

int main()
{
	int i,j;
	int k = -1;
	int n;
	scanf("%d",&n);
	
	for(i = 2;i<=N-1;i++)
	{
		if(a[i] == 0) 
		{
			for(j = 2;j*i<=N-1;j++)
			{
				a[i*j] = 1;
			}
		}
	}
	for(i = 2;i<=N-1;i++)
	{
		if(a[i] == 0) prime[++k] = i;
	}
	for(i = 0;i<=k;i++)
	{
		if(prime[i] == n) 
		{	
			printf("%d",prime[i+1]);
			return 0;
		}
	}
	
}