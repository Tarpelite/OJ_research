#include<stdio.h>
int f(int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;f(i)<0;i++)
	{
		;
	}	
	printf("%d",i);
	return 0;
}


int f(int n)
{
	int i=1;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return -10;
	}
	return 10;
}