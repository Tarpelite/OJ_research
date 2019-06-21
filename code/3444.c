#include <stdio.h>

int Cn(int m,int n)//m at the top
{
	int s=1,i=n-m;
	while(i++<n)//BE CAUTIOUS ABOUT OVERFLOW!
		s *= i;
	i=0;
	while(i++<m)
		s /= i;
	
	return s;
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	
	if(m==0)
		printf("0");
	else if(n==0)
		printf("0");
	else if(n>m)
		printf("1");
	else
		printf("%d",Cn(n,m));
	
	
	return 0;
}