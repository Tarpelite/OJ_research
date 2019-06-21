#include<stdio.h>
long long f(int);
int main()
{
	int m,n,a;
	scanf("%d %d",&m,&n);
	a=f(m)/(f(n)*f(m-n));
	printf("%d",a);
	return 0;
}

long long f(int a)
{
	if(a<=1)
		return 1;
	else
		return a*f(a-1);
}