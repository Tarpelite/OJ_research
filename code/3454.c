#include <stdio.h>

int main()
{
	unsigned long long num1=1,num2=1,num3;
	int i,j;
	int m,n;
	int num; 
	scanf("%d %d",&m,&n);
	if(m==n)
	{
		num3=1;
	}
	else if(n==0)
	{
		num3=1;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			num1*=i;
		}
		for(i=m;i>m-n;i--)
		{
			num2*=i;
		}
		num3=num2/num1;
	}
	printf("%llu",num3);
	return 0;
}