#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(n=n+1;;n++)
	{
		for(i=n-1;i>1;i--)
		{
			if(n%i==0)
			{
				break;
			}
		}
		if(i==1)
		{
			break;
		}
	}
	printf("%d",n);
    return 0;
}