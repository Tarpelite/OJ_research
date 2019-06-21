#include<stdio.h>
long jiechen(int n)
{
	long f;
	if(n==1||n==0)
	f = 1;
	else
	f = jiechen(n-1)*n;
	return f;
}
int main()
{
	int m,n,y;
	scanf("%d%d",&m,&n);
	y = jiechen(n) * jiechen(m-n);
	printf("%d",jiechen(m) / y);
	return 0;
}