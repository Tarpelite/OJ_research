#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	if(n==1)
	{
		printf("2");
		return 0;
	}
	n++;
	
	for(;n<200000;n++)
	{
		j=1;
		for(i=2;i<=sqrt(n)+1;i++)
		{
			if(n%i==0)
			{
				j=0;
				break;
			}
		}
		if(j)
		{
			printf("%d",n);	
			break;		
		}		
	}

}