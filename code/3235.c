#include <stdio.h>
int c(int m,int n)
{
	if(n==1) return m;
	if(n==m) return 1;
	if(n<1||m<1||n>m) return 0;
	else return (c(m-1,n-1)+c(m-1,n));
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",c(m,n));
	return 0;
}