#include <stdio.h>
int main()
{
	int n,i,num=0;
	scanf("%d",&n);
	if(n==2)
	{
		printf("3");
		return 0;
	}
	n=n+1;
	for(;;n++)
	{
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		num=num+1;
	}
		if(num==0)
		{	
			printf("%d",n);
			return 0;
		}
		else
			num=0;
	}
	return 0;
}