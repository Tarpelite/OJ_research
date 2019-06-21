#include <stdio.h>

int pn(int x)//JUDGE PRIME NUMBER
{
	int n=2,t=1;
	while(n<x)
	{
		if(x%n==0)
		{
			t=0;
			break;
		}
		n++;
	}
	return t;
}

int main()
{
	int n=0;
	scanf("%d",&n);
	
	while(pn(++n)==0);
	printf("%d",n);
	
	
	
	return 0;
}