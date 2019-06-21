#include<stdio.h>

int zhi(int x);

int main()
{
	int n;
	scanf("%d",&n);
	n++;
	while(zhi(n))
	{
		n++;
	}
	printf("%d",n);
}

int zhi(int x)
{
	int i=2,j=0;
	while(i<x)
	{
		if(x%i==0)
		j++;
		i++;
	}
	if(j==0)
	return 0;
	else
	return 1;
}