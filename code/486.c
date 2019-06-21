#include<stdio.h>
int main()
{	
	int n,np;
	scanf("%d",&n);
	for(np=1+n;;np++)
	{
		int ok=0;
		for(int k=2;k<np;k++)
		{
			if(np%k==0)
			{
				ok=1;
				break;
			}
		}
		if(ok!=1)
		{
			break;
		}
		
	}
	printf("%d",np);
	return 0;
 }