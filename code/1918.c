#include<stdio.h>
int prime(int n);
int main()
{
	int n,i=n;
	scanf("%d",&n);
	for(i=n+1;i<2*n;i++)
	{
		if(prime(i))
		break;
	}
	printf("%d\n",i);
	return 0;
}
int prime(int n)
{
	int s;
	int i;
	for(i=3;i<n;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
	return 1 ;
	else
	return 0;
}