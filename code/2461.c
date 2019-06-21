#include<stdio.h>
int is_prime(int n)
{
	int j,c=1;
	if(n==1)	return 0;
	for(j=2;j*j<=n;j++)
	{
		if(n%j==0)	c=0;
	}
	return c;
}
int main()
{
	int i=1,n,c;
	scanf("%d",&n);
	for(i=1;is_prime(n+i)==0;i++);
	
	printf("%d",n+i);
	return 0;
}