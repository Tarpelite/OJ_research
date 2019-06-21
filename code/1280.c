#include <stdio.h>
int f(int);

int f(int x)
{
	int j;
	for(j=2;j*j<=x;j++)
	{
		if(x%j==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n,t=0;
	scanf("%d",&n);
	while(t==0)
	{
		n++;
		t=f(n);
	}
	printf("%d",n);
	return 0;
}