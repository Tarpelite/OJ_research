#include<stdio.h>
int x(int,int);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",x(m,n));
	return 0;
}
int x(int m,int n){
	if(m<n||m<1||n<1) return 0;
	if(n==1) return m;
	if(n==m) return 1;
	return x(m-1,n)+x(m-1,n-1);
}