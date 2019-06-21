#include<stdio.h>
int C(int m,int n);
int main()
{
	int m,n,x;
	
	scanf("%d %d",&m,&n);
	
	x=C(m,n);
	
	printf("%d",x);
	
	return 0;
}

int C(int m,int n)
{
	if ( m<n || m<1 || n<1 ) 
		return 0;
	if ( n==1 ) 
		return m;
	if ( n == m || n==0) 
		return 1;
	return C(m-1, n) + C(m-1, n-1);
}