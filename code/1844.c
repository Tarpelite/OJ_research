#include<stdio.h>
int is_prime(int x) 
{    
if (x == 1) 
	return 0;    
for (int now = 2;now*now <= x;now++)        
	if (x%now == 0)            
		return 0;    
return 1;
 } 
int main()
{
	int x,y;
	scanf("%d",&x);
	int i=1;
	for(i=1;i<100000;i++)
	{
		y=x+i;
		if(is_prime(y))
			break;
	}
	printf("%d",y);
	
}