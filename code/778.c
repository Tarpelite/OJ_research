#include<stdio.h>
int main()
{
	int m,n,i,a=1,b=1,c;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
	{
	a=a*(m+1-i);
	b=b*i; 
	}
	c=a/b;
	printf("%d",c);
	return 0; 
	
 }