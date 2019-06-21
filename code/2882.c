#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	int flag=0;
	for (int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for (i=n+1;isPrime(i);i++);
	printf("%d\n",i);
	return 0;
}