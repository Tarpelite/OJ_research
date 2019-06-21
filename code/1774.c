#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int Qprime(int);
int main()
{
	int n,i,x;
	scanf("%d",&n);
	i=n+1;
	while(Qprime(i)==0)
		i++;
	printf("%d",i);
 	return 0;
}


int Qprime(int a)
{
	int i=2;
	while(i<a)
	{
		if(a%i==0)
			return 0;
		i++;
	}
	return 1;
}