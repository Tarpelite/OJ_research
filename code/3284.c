#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	
	int M=1,N=1,i;
	int x;
	
	for(i=0;i<=n-1;i++)
	M=M*(m-i);
	
	for(i=0;i<=n-1;i++)
	N=N*(n-i);
	
	x=M/N;
	
	printf("%d",x);


return 0; 
 }