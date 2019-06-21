#include<stdio.h>
int g(int,int);
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	printf("%d",g(m,n));
	return 0;
}
int g(int m,int n)
{
	int c;
	if(n==m||n==0)
	return 1;
	else 
	return g(m-1,n-1)+g(m-1,n);
}