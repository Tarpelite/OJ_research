#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,a;
	scanf("%d",&a);
	for(i=a+1;i<1000000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
			if(j>i/2)
			{
				printf("%d",i);
				return 0;
			}
		}
	}
}