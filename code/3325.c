#include<stdio.h>
int main()
{

	long long x,i,j,k;
	scanf("%lld", &x);
	if(x==1)
	printf("%lld",x+1);
	else if(x==2)
	printf("%lld",x+1);
	else
	{
	for(i=x+1;i<2147483647;i++)
	{
		for(j=2;j<i-1;j++)
		{
			
			if(i%j==0)
			{
			k=0;
			break;	
			}
			
			else
			k=1;
			
		}
		if(k==0)
		continue;
		else
		break;
	
	}
	printf("%lld",i);			
	}

	
	return 0;
 }