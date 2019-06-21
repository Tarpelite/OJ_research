#include<stdio.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	
	int sum=1;
	for(int i=1;i<=n;i++)
		sum*=(m--);

	while(n)
	{	
		sum/=n;
		n--;
	}

	printf("%d\n",sum);

	return 0;
}