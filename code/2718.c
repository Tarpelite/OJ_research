#include<stdio.h>
 
 int com(int a,int b)
 {
 	if(b == 1) return a;
 	if(a == 1||a == b|| b == 0) return 1;
 	return (com(a-1,b-1)+com(a-1,b));
 }

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",com(m,n));
 }