#include<stdio.h>
int main()
{
	int a,b,m=0;
	scanf("%d",&a);
	for(int i=a+1;i<1000000;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				m=1;
				break;
			}
			else
			m=0;
		}
		if(m==0)
		{
			b=i;break;
		}
	}
	printf("%d",b);
	return 0;
 }