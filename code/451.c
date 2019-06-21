#include<stdio.h>
int main()
{
	int a,b,c,d,e,s=0;
	int mark=0;
	scanf("%d",&a);
	for(d=a+1;;d++) 
	{
 		for( b=1;b<d;b++)
		{
			if(d%b==0&&b!=1)
			{
				mark=1; 
				break;
				}
		}
		if(mark==0)
		{
			printf("%d",d);
			break;
		}
		mark=0;
			
	}
	return 0;
}