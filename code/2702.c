#include<stdio.h>
int gcd(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	while(1)
	{
		n++;
		if(gcd(n)==1)
		{
			printf("%d",n);
			return 0;
		}
	}
}