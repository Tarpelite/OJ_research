#include<stdio.h>
#include<math.h>
int isPrime(int x)
{
	int i;
	int isPrime = 0;
	for(i = 2;i*i<=x;i++)
	{
		if(x%i == 0)
		{
			isPrime = 1;
			break;
		}
	}
	return isPrime;
}


int main()
{
	int n,q;
	scanf("%d",&n);
	for(int i=n+1;i<=100100;i++)
		{ 
	      if(isPrime(i) == 0)
		  {
		  	printf("%d",i);
		  	return 0;
		   } 
	    }   
}