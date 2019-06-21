#include <stdio.h>

int fangan(int m, int n)//ÏÂ±êmÉÏ±ên 
{
	int i;
	int sum=1,sum1=1;
	for(i=1;i<=n;i++)
	sum=sum*i;
	
	for(i=m;i>=(m-n+1);i--)
	sum1=sum1*i;
	
	return sum1/sum;
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",fangan(m,n));
	return 0;
}