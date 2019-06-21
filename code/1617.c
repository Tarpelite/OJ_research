#include<stdio.h>
#include<math.h>
int is_PrimeNumber(int n)
{
	int i=2,a=0;
	for(i;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			a++;
		}
	}
	if(a==0)
	return 1;
	else
	return 0;
}

int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(is_PrimeNumber(n+i)!=1)
	{
		i++;
	}
	printf("%d",n+i);
	return 0;
}