#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int n;
	int i=1;
	scanf("%d",&n);
	while(i!=n)
	{
		i=2;
		n++;
		while(n%i!=0)
		{
			i++;
		}
	}
	printf("%d",n);
	return 0;
}