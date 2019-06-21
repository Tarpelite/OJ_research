#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int n,j=2;
	scanf("%d",&n);
	int m;
	for(m=n+1;j!=m-1;m++)
	{
		for(j=2;j<m;j++)
		{	
			if(m%j==0)
			break;
		}
	}
	printf("%d",m-1);
	return 0;
}