#include<stdio.h>

long long f(int x)
{
	if(x<=1)
	  return 1;
	return x*f(x-1);
}

int main()
{
	int m,n;
	int series;
	
	scanf("%d %d",&m,&n);
	series=f(m)/(f(n)*f(m-n));
	
	printf("%d",series);
}