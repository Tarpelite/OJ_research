#include<stdio.h>
int zhi(int);
int main()
{
	int n,i,j,count=0;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		count=zhi(i);
		if(count==1)
		{
			break;
		}
	}
	printf("%d",i);
	return 0;
}
int zhi(int x)
{
	if(x==2||x==3)
	return 1;
	if(x==1)
	return 0;
	else
	{
		int count=0,t=0;
		for(t=2;t<x;t++)
		{
			if(x%t==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}