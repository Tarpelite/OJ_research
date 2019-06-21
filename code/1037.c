#include<stdio.h>
int c(int m,int n)
{
	if(n==0)
	return 1;
	if(n==m)
	return 1;

	return c(m-1,n)+c(m-1,n-1);
 } 
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",c(m,n));
	return 0;
}