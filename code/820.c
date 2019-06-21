#include<stdio.h>
int f(int x)
{
	int i;
	for(i=2;i<=x-1;i++)
	{
		if(x%i==0)
		break;
	}
		if(i>=x)
		return x;
		else 
		return 0;
} 

int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=n+1;f(i)!=i;i++)
	{
		
		
	}
	printf("%d",i);
	return 0;
}