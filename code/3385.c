#include<stdio.h>
double f(int n)
{
	int i;
	double ans=1.0;
	for(i=1;i<=n;i++)
	{
		ans*=i;
	}
	return ans;	
}
int main()
{
	int m,n;
	double a,b,c,d;
	scanf("%d%d",&m,&n);
	a=f(m);
	b=f(n);
	c=f(m-n);
	d=a/(b*c);
	printf("%.0lf",d);
	
}