#include<stdio.h>
int c(int m,int n); 
int main()
{
	int n,m;
	int sum;
	scanf("%d%d",&m,&n);
	sum=c(m,n);
	printf("%d",sum);
}
int c(int m,int n){
	if(m<n||m<1||n<1) return 0;
	if(n==m||m==1) return 1;
	if(n==1) return m;
	else return c(m-1,n-1)+c(m-1,n);
}