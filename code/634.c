#include <stdio.h>
int f(int m,int n)
{
	if(m<n||m<1||n<1)
	return 0;

	if(n==1)
	return m;

	if(m==n)
	return 1;

	return f(m-1,n)+f(m-1,n-1);
}

int main()
{
	int m,n,y;
	scanf("%d %d",&m,&n);
	y=f(m,n);
	printf("%d",y);

	return 0;
}