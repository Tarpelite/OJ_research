#include <stdio.h>
unsigned long f(unsigned long);
int main()
{
	int m,n;
	int sum;
	scanf("%d%d",&m,&n);
	sum=f(m)/(f(n)*f(m-n));
	printf("%d",sum);
	return 0;
	
}
unsigned long f(unsigned long n)
{
	if(n<=1)
	return 1;
	return(n*f(n-1));
}