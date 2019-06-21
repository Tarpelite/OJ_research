#include<stdio.h>

int C(int m,int n)
{
	if(n==0||n==m)
	return 1;
	return C(m-1,n)+C(m-1,n-1);
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",C(m,n));
	return 0;
}