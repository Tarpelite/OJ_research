#include<stdio.h>
int isPrime(int i);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;i<=110000;i++)
	{
		if(isPrime(i)==1)
			{
				printf("%d",i);
				break;
			}
	}
 	return 0;
	
}
int isPrime(int i)
{
	int ret=1;
	int k;
	for(k=2;k<i-1;k++)
	{
		if(i%k==0)
		{
			ret=0;
			break;
		}
		
	}
	
	return ret;
	
	
}