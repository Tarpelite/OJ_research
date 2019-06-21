#include<stdio.h>
int is_prime(int x)
{
	int i=1,m=0;
	while(i<=x)
	{
		if(x%i==0)
		{
			m++;
		}
		i++;
	}
	return m==2;
}
int main()
{
	int x;
	scanf("%d",&x);
	for(x=x+1;;x++)
	{
		if(is_prime(x))
		break;
	}
	printf("%d",x);
	return 0;
}