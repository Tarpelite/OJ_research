#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	int i,num;
	scanf("%d",&a);
	for(num=a+1;num++;)
	{
		b=sqrt(num);
		for(i=2;i<=b;i++)
		{
			if(num%i==0)
			{
				break;
			}
			if(i==b)
			{
				printf("%d",num);
				return 0;
			}
		}
		
	}
 }