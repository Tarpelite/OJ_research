#include <stdio.h>

int prime(int x)
{
	int num,i,count=0;
	if(x==1)
	{
		num=0;
	}
	else if(x==2)
	{
		num=1;
	}
	else
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				count+=1;
				break;
			}
		}
		if(count==0)
		{
			num=1;
		}
		else
		{
			num=0;
		}
	}
	return num;
}

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=n+1;i<214748364;i++)
	{
		if(prime(i)==1)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}