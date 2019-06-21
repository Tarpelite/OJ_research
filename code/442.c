//B
#include<stdio.h>
int isZhi(int );
int main()
{
	long long n,i;
	scanf("%d",&n);
	for(i=1;i<=100000;i++)
	{
		if(isZhi(n+i) == 1)
		{
			printf("%d",n+i);
			break;
		}
	}
	
	return 0;
}

int isZhi(int a)
{
	if(a == 2)
	{
		return 1;
	}
	int counter=0,i;
	for(i=2;i<a;i++)
	{
		if(a%i == 0)
		{
			counter++;
		}
	}
	if(counter == 0)
	{
		return 1;
	}
	return 0;
}