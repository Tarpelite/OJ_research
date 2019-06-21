#include<stdio.h>
int main()
{
	int m,n,i,j,c1=1,c2=1,c;
	scanf("%d%d",&m,&n);
	if(n>m/2)
	n=m-n;
	for(i=m;i>m-n;i--)
	c1*=i;
	for(j=n;j>=1;j--)
	c2*=j;
	c=c1/c2;
	printf("%d",c);
	return 0;
}