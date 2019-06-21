#include<stdio.h>
int f(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		if(f(i)==1)
		{
			printf("%d",i);
			break;
		}
	}
}
int f(int x)
{
	int j;
	for(j=2;j<x;j++)
	{
		if(x%j==0)
		return 0;
	}
	return 1;
}