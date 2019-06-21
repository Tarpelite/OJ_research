#include<stdio.h>

int fact(int m,int n)
{
	int result=1;
	for(int i=m;n>0;i--,n--) 
	result*=i;
	return result;
}
int fact_1(int n)
{
	int k=1;
	for(int i=2;i<=n;i++) 
	k*=i;
	return k;
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",fact(m,n)/fact_1(n));
	return 0;
}