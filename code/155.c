#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int n;

int re(int n)
{
	int k=sqrt(n*1.0),x=1;
	for(int i=2;i<=k;i++)
		if(n%i==0)
		{
			x=0;
			break;
		}
	return x;
}

int main()
{
	scanf("%d",&n);
	while(1)
	{
		if(re(++n))
		{
			printf("%d",n);
			break;
		}
	}
	return 0;
}