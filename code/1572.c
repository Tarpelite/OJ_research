#include<stdio.h>
double jiechen(int);
int main()
{	int m,n;
	double s;
	
	scanf("%d %d",&m,&n);
	if(m==n||n==0)
		{	printf("1");
			return 0;
		}
	s=jiechen(m)/(jiechen(m-n)*jiechen(n));
	printf("%.0lf",s);
	return 0;
	
}
double jiechen(int x)
{	double sum=1;
	for(;x!=1;x--)
		sum*=x;
	return sum;
		
}