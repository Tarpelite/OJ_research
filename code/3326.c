#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i=a+1,j;
	for(i=a+1;i<=1000000;i++)
	{
		double m=sqrt(i);
		for(j=2;j<=(int)m;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
        if(j==(int)m+1)
        {
        	printf("%d",i);
        	break;
		}
		else continue;
	}
}