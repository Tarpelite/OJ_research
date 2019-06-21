#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);	
	int i,j,k;
	for(i=1;i<100000;i++)
	{
		k=2;
		for(j=2;j<x+i;j++)
		{
			if((x+i)%j!=0)
				k++;
		}
		if(k==x+i)
		{
			printf("%d",x+i);
			return 0;
		}
	}

 }