#include<stdio.h>
int main()
{
	int m,n,i,j,a=1,b=1,c;
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++)
		a=a*(m-i);
	for(j=n;j>=1;j--)
    	b=b*j;
	c=a/b;
	printf("%d",c);
	return 0;
	
 }