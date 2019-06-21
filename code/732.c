#include<stdio.h>
#include<math.h>
int is_prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		return 0;
	}
    if(i==x)
    return 1;
}
int main()
{
	int n,x;
	scanf("%d",&n);
    x=n+1;
	while(1)
	{
			if(is_prime(x)==1)
			{
			printf("%d",x);
			break;
		    }
			if(is_prime(x)==0)
			x++;
		
	}
    }