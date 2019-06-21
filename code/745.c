#include<stdio.h>
int main()
{
	int n,m,i,s=1,d=1,a;
	scanf("%d%d",&m,&n);
	for(i=m;i>m-n;i--)
	{s=s*i;}
	for(i=1;i<=n;i++)
	{d=d*i;}
	a=s/d;
	printf("%d",a);
	return 0;
 }