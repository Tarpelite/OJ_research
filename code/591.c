#include<stdio.h>

int main()
{
	int m,n,x=0,z=2;
	
	scanf("%d",&m);
	
	for(n=m+1;x==0;n++)
	{
		for(z=2;z<n;z++)
		{
			if(n%z==0)
			{
				x=1;
				break;
			}
		}
		
		if(x==0)
		{
			printf("%d",n);
			return 0;
		}
		x=0;
	}
	
}