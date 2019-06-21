#include <stdio.h>
#include <math.h>

int zs(int x)
{
	int i,j;
	j=(int)sqrt((double)x);
	for(i=2;i<=j;i++)
	{
		if(x%i==0)
		break;
	}
	
	if(i>j)
	return x;
	
	else
	return 1;
}

int main(void)
{
	int n,k,y;
	scanf("%d",&n);
	
	for(k=n+1;k<100004;k++)
	{
		y=zs(k);
		
		if(y!=1)
		break;
	}
	
	printf("%d",y);
	
	return 0;
}