#include <stdio.h>

int main()

{
	int n,m,i;
	scanf("%d",&n);
	for(m=n+1;;m++)
	{
		int is_prime=1;
		for(i=2;i<m;i++)
		{
			if(m%i==0)
			{
				is_prime=0;
				break;
			}
		}
		if(is_prime==1)
		{
			printf("%d",m);
			break;
		}
		
	}
	return 0;
 }