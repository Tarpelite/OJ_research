#include <stdio.h>

int main()
{
	int n,i,sum=-1;
	scanf("%d",&n);
	while(sum!=0)
	{
		n++;
		sum=0;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				sum++;
			}
		}
	}
	printf("%d\n",n);
	return 0;
}