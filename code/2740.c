#include<stdio.h>
int c(int m,int n)
{
	if(n==1||n==m) return 1;
	return (c(m-1,n-1)+c(m-1,n));
 } 
 
 int main()
{
	int m,n,res,p=1;
	scanf("%d%d",&m,&n);
	res=c(m+1,n+1);
	printf("%d",res);
	return 0;
}