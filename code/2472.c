#include<stdio.h>

int main()
{
	int m,n,i,x=1;
	
	scanf("%d%d",&m,&n);
	
	for(i=m;i>m-n;i--) x=x*i;
	
	for(i=1;i<=n;i++) x=x/i;
	
	printf("%d",x);
	
	return 0;
}