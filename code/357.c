#include<stdio.h>
int j(int,int);
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	printf("%d",j(m,n));
	return 0;
}
int j(int m,int n)
{
	if(m<n||m<1||n<1)
	return 0;
	if(n==1)
	return m;
	if(n==m)
	return 1;
	return j(m-1,n)+j(m-1,n-1);
}