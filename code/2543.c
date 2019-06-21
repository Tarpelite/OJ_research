#include <stdio.h>
#define M 100003

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=n+1;i<=M;i++)
	{
		int flag=0;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}	
		}
		if(flag==0)
			{
				printf("%d",i);
				break;
			}
	}	
	return 0;
}