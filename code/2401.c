#include<stdio.h>
double fac(int x)
{
	double t=1;
	int sum=1;
	for(;sum<=x;sum++)
	t*=sum;
	return t;
	
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	double c;
	c=fac(m)/fac(n);
	printf("%.0f",c/fac(m-n));
	return 0;
}