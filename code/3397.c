#include <stdio.h>
int isz(int x)
{
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			return 0;
			break;
		}
	}
	return 1;
 } 
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;i<=n+100000;i++)
	{
		if(isz(i)) break;
	}
	printf("%d",i);
	return 0;
}