#include<stdio.h>
int num(int m,int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",num(m,n));
	return 0;
}
int num(int m,int n)
{
	if(m<n||m<1||n<1) return 0;
	if(n==1) return m;
	if(m==n) return 1;
	return num(m-1,n)+num(m-1,n-1);
}