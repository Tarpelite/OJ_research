#include <stdio.h>
#include <stdlib.h>
int zhishu(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
	        return 0;
		}
	}
	return 1;
}

int main() 
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=n+1;i<=1000000;i++)
	{
		if(zhishu(i)==1)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}