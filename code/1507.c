/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/04/19 17:20
	Description: 
*/
#include <stdio.h>
int factorial(int,int);
int main()
{
	int m, n, Res, x, y;
	scanf("%d%d", &m, &n);
		x=factorial(m,n);
		y=factorial(n,n);
		Res=x/y;
	printf("%d", Res);
	return 0;
} 
int factorial(int m,int n)
{
	int s=1;
	for(int i=0;i<n;i++)
		s=s*(m-i);
	return s;
}