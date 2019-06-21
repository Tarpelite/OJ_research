#include<stdio.h>
#include<math.h>
int zhishu(int);
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)
	{
		printf("2");
		return 0;
	}
	if(n==2)
	{
		printf("3");
		return 0;
	}
	else
	{
		n=n+2;
		while(zhishu(n)==2)
		{
			n=n+2;
		}
		printf("%d",n);
	}
	return 0;
}

int zhishu(int m)
{
	int i=2;
	while(i<=sqrt(m))
	{
		if(m%i==0)
		{
			break;
		}
		else
		{
			i++;
		}
	}
	if(i<=sqrt(m))
	{
		return 2;
	}
	else
	{
		return 1;
	}
}