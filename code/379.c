#include<stdio.h>
int f(int x)
{
	int flag,j;
	flag=0;
	for(j=2;j<x;j++)
	{
		if(x%j==0)
		flag=flag+1;

	}
		return flag;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;i<1000000;i++)
	{
		if(f(i)==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}