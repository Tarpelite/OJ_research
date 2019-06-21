#include <stdio.h>
int fun(int x)
{
	
	int i; 
	if(x<=1)
		return 0;
	for(i=2;i*i<=x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int x,i,ans;
	scanf("%d",&x);
	for(i=x+1;1;i++)
	{
		if(fun(i)==1)
		{
			printf("%d",i);	
			break;
		}
	}
	return 0;
}