#include<stdio.h>
long long f(int);
int main()
{
	int m,n;
	long long x;
	scanf("%d%d",&m,&n);
	x=f(m)/(f(n)*f(m-n));
	printf("%lld",x);
}
long long f(int n){
	if(n==0)
	return 1;
	else
	return n*f(n-1);
	
}