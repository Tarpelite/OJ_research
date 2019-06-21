#include<stdio.h>
int combnum(int,int);
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",combnum(m,n));
    return 0;
}
int combnum(int m,int n)
{
	if(m<n||m<1||n<1)
	return 0;
	if(n==1)
	return m;
	if(m==n)
	return 1;
	return combnum(m-1,n)+combnum(m-1,n-1);
	
}