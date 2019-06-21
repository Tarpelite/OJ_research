#include<stdio.h>

int iszhishu(int x); 
int main()
{
	int i,a,x;
	scanf("%d",&a);
	i=1;
	x=a+i;
	while(iszhishu(x)!=1)
	{
		i++;
		x=a+i;
	}
	printf("%d",x);
	return 0;
}

int iszhishu(int x)
{
	int count,i;
	if(x==1)
	return 0;
	else 
	{
		count=1;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				count=0;
				break;
			}
		}
		return count;
	}
	
}