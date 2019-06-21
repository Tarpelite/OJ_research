#include<stdio.h>
int f(int);
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=a+1;;i++)
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