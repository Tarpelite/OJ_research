#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m==0||n==0)
	printf("0");
	else{
	long long x=1,y=1,z=1;
	for(int i=1;i<=n;i++)
	{y=y*i;}
	for(int j=1;j<=m-n;j++)
	{x=x*j;}
	for(int l=1;l<=m;l++)
	{z=z*l;}
	int a;
	a=z/(x*y);
	printf("%d",a);}
	return 0;
}