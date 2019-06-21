#include<stdio.h>
int f(int x)
{
	if(x==2)
	{
		return 1;
	}
	int i=2;
	for(i;i<x;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	if(i==x)
	{
		return 1;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	while(f(n+1)==0)
	{
		n++;
	}
	printf("%d",n+1);
	return 0;
}