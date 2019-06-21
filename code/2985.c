#include<stdio.h>
int zs(int n)
{
	int i=2;
	while(i<=n)
	{
		if(n%i!=0)
		{
			i=i+1;
		}
		if(n%i==0)
		{
			break;
		}
	}
	if(n==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	n=n+1;
	while(zs(n)==0)
	{
		n=n+1;
	}
	if(zs(n)==1)
	{
		printf("%d",n);
	}
	return 0;
}