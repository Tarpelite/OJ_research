#include <stdio.h>

int main()
{
	unsigned long long num1=1;
	int i,j;
	int m,n;
	int num; 
	scanf("%d %d",&m,&n);
	if(m==n)
	{
		num1=1;
	}
	else if(n==0)
	{
		num1=1;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			num1*=m+1-i;
			num1/=i;
		}
	}
	printf("%llu",num1);
	return 0;
}