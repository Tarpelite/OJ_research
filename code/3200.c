#include<stdio.h>
int zs(int);
int main()
{
	int n,k;
	scanf("%d",&n);
	k=n+1;
	while(1)
	{
		if(zs(k)==1)
		{
			printf("%d",k);
			break;
		}
		k++;
	}
	return 0;
}

int zs(int x)
{
	int i,j=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}