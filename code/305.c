#include<stdio.h>
int main()
{
	int a,m=0,b,i=2;
	scanf("%d",&a);
	if (a==2)
	{
		a=3;
		printf ("%d",a);
	}
	else 
	{
		b=a+1;
		while (i!=b)
		{
			for (i=2;i<b;i++)
			{
				if (b%i==0)
				{
					b++;
					break;
				}
			}
		}
		printf("%d",b);
	} 
	return 0;
}