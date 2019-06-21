#include <stdio.h>
int c_n(int ,int );
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",c_n(m,n));
	return 0;
	
}

int c_n(int m,int n)
{
	if(m<n||m<1||n<1)
	return 0;
	if(n==1)
	return m;
	if(n==m)
	return 1;
	return c_n(m-1,n)+c_n(m-1,n-1);
}