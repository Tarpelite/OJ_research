#include<stdio.h>
	int c(int m,int n)
	{
		if(n==m||n==0)
		return 1;
		else
		return c(m-1,n)+c(m-1,n-1);
	}
	int main()
	{
		int m,n;
		scanf("%d %d",&m,&n);
		printf("%d",c(m,n));
	}