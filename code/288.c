#include <stdio.h>
int main()
{
	long long  x,y,z,a=1,b=1,c=1,i;
	scanf("%lld %lld",&x,&y);
	
	
		
	for(i=x;i>=x-y+1;i--)
	{
		a*=i;
	}
	for(i=1;i<=y;i++)
	{
		b*=i;
	}
	for(i=1;i<=(x-y);i++)
	{
		c*=i;
	}
	z=(a)/(b);
   
	printf("%lld",z);
	
    
	return 0;
	

}