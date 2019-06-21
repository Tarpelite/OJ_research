#include <stdio.h>
int main()
{
	int x,y,i;
	scanf("%d",&x);
	there: x=x+1;
	for(i=2;i<x;i++)
	{
		y=x%i;
		if(y==0)
		{
			goto there;
		}
	}
	printf("%d",x);
	return 0;
 }