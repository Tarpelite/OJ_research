#include<stdio.h>
int main()
{
	int n,m;
	int mozhi;
	scanf("%d",&n);
	m=n;
	n=n+1;
	while(m>=2)
	{
		 
		mozhi=n%m;
		if(mozhi==0)
		{
			n=n+1;
			m=n-1;
		}
		else
		{
			m=m-1;
		}
	}
	printf("%d",n);
	return 0;
 }