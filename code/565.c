#include<stdio.h>
int c(int m,int n)
{
	if(m<n||m<1||n<1)
	{
		return 0;
	}
	else if(n==1)
	{
		return m;
	}
	else if(n==m)
	{
		return 1;
	}
	else
	{
		return c(m-1,n)+c(m-1,n-1);
	}
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",c(m,n)); 
	return 0;
}