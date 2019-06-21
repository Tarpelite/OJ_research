#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	int i,flag=1;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;isPrime(i)!=1;i++);
	printf("%d",i);
	return 0;
}