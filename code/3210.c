#include<stdio.h>
int zhi(int);
int i;
int main()
{
	int n,k,j;
	scanf("%d",&n);
	for(j=n+1;;j++)
	{
		if(zhi(j))
		{
			k=j;
			break;
		}
	}
	printf("%d",k);
	return 0;
}
int zhi(int x)
{
	for(i=2;i<x;i++)
		if(x%i==0)return 0;
	return 1;
}