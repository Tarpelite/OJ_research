#include <stdio.h>

int main()
{
	int num,i,sum=0,k;
	
	scanf("%d",&num);
	
	for(i=num+1;i<=1000000;i++)
	{
		sum=0;
		for(k=1;k<=i;k++)
		{
			if(i%k==0)
				sum++;
		}
		if(sum==2)
			break;
	}
	printf("%d",i);
	
	return 0;
}