#include<stdio.h>
int main()
{
	int m,n,i,c;
	scanf("%d%d",&m,&n);
	c=1;
	for(i=m-n+1;i<=m;i++)
	c=c*i;
	for(i=1;i<=n;i++)
	c=c/i;
	printf("%d",c);
	return 0;
	
}