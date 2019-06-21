#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	int i=2;
	for(;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
    }
	
	return 1;
		 
}
int main()
{
	int x=0,j=0;
	scanf("%d",&x);
	j=x+1;
	while(isPrime(j)==0)
	{
		j++;
	}
	printf("%d",j);
	return 0;
}