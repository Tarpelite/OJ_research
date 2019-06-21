#include <stdio.h>


int main() 
{
	int m,n;
	scanf("%d%d",&m,&n);
	int sum = 1;
	int l = m;
	for(;m>l-n;m--)
	{
		sum *= m;
	}
	int i = 2;
	for(;i<=n;i++)
	{
		sum /= i;
	}
	printf("%d",sum);
	return 0;
}