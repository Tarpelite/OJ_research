#include<stdio.h>
int isPrime(int t)
{	int x=1;
	for(int i=2;i<t;i++)
	if(t%i==0)
	x=0;
	return x;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=n+1;;i++)
	{
		if(isPrime(i))
		{
		printf("%d",i);
		return 0;}
	}
}