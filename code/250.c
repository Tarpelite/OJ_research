#include<stdio.h>
int main()
{
	int i,j;
	int n;
	int sign;
	scanf("%d",&n);
	for(i = n + 1; ;i++)
	{
		sign = 1;
		for(j = 2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				sign = 0;
				break;
		
			}
		}
		if(sign){
			printf("%d",i);
			return 0;
		}
	}
 }