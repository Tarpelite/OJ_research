/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/04/19 17:58
	Description: 
*/
#include <stdio.h>

int main()
{
	int n, j, m, i, k;
	scanf("%d", &n);
		if(n==2)
		printf("%d", n+1);
		else
		{
			for(j=2;j<=30;j=j+2)
			{
				k=(n+j)/2;
				for(i=3;i<=k;i++)
				{
					if((n+j)%i==0)
					break;
				} 
				if(i>=k)
				break;
			}
			printf("%d", n+j);
		}

	return 0;
}