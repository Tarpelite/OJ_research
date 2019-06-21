#include<stdio.h>
#include<math.h>
int whether (int n)
{
	int i,c;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c=1;
			break;
		}
		if(i>sqrt(n))
		{
			c=0;
			break;
		}
	
	}
	return c;
}
int main()
{
	int n;
	scanf("%d",&n);
	n=n+1;
	for(n;1;n++)
	{
		if(whether(n)==0)
		{printf("%d",n);
		break;} 
	}
	return 0;
 }