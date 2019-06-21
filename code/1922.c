#include <stdio.h>
int main()
{
	int a,b,c,n,i=2;
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d",2);
	}
	if(n==2)
	{
		printf("%d",3);
	}
	if(n>=3)
	{
	n=n+1;
	a=0;	
	while(a!=1)
	{
		while(n%i!=0)
		{
			i=i+1;
		}
		if(n==i)
		{
			a=1;
		}
		if(n!=i)
		{
			a=0;
			n=n+1;
			i=2; 
		}
	}
	printf("%d",n);
		}
	return 0;
}