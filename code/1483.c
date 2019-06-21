#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i = n+1;
	while(1)
	{
		if(isprime(i))
		{
			break;
		}
		i++;
	}
	printf("%d",i);
}

int isprime(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}