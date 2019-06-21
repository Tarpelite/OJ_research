#include<stdio.h>
long long f(int);
int main()
{
	int n,m,s;
	scanf("%d%d",&m,&n);
	s=(double)f(m)/(double)(f(n)*f(m-n));
	printf("%d",s);
	return 0;
}
long long f(int n)
{
	if(n<=1)
		return 1;
	return n*f(n-1);
}