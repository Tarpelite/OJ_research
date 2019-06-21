#include <stdio.h>

int is_prime(int n)
{
	int i;
	for(i=3;i<n;i++)
	{
		if (n%i==0)
		return 0;
	}
	return 1;
}


int main()
{
	int i,m=1;
	int n;
	scanf("%d",&n);
	if(n==2)
	{printf("3");return 0;
	}
	if(n==1)
	{printf("2");return 0;
	}
	for(i=n+2;;i=i+2)
	if(is_prime(i))
	{printf("%d",i);return 0;
	}
	return 0;
}