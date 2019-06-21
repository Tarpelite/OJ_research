#include<stdio.h>
//Cmn=c(m-1)n+c(m-1)n-1
 int C(int m, int n)
{
	if(n==0) return 1;
	else if(m<n) return 0;
	else return (C(m-1,n)+C(m-1,n-1));	
}


int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",C(m,n));
return 0;
}