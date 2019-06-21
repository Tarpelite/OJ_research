#include<stdio.h>
int main()
{
	int i=1,b,j,d,t;
	scanf("%d",&b);	
	
	for(j=b+1;j<1000000;j++)
	{	t=0;
		for(i=2;i<j;i++)
		{
			d=j%i;
			if(d==0)
			{
				t=1;				
			}
		}
		if(t==0)
		{
		
			printf("%d",j);
			break;
		}
	}
	return 0;
 }