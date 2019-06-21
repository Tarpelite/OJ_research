#include<stdio.h>

int main()
{
	int m,n,i,z;
	scanf("%d%d",&m,&n);
	int a=m,b=n,c=m-n;
	for(i=m-1;i>c;i--)
	    a*=i;
	for(i=n-1;i>0;i--)
	    b*=i;
	z=a/b;
	printf("%d",z);
	return 0;
 }