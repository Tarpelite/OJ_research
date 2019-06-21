#include<stdio.h>//求组合数！！ c(n,m)=c(n-1,m)+c(n-1,m-1)
int c(int m,int n)
{
	if(m==n||n==0)
	return 1;
	else return c(m-1,n-1)+c(m-1,n);
} 
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int x=c(m,n);
	printf("%d",x);
	return 0;
}