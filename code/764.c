#include<stdio.h>

int main()
{
	int a,b,i,j,x,y,z;
	scanf("%d %d",&a,&b);
	x=1,y=1;
	for(i=a-b+1;i<=a;i++)x=x*i;
	for(j=1;j<=b;j++)y=y*j;
	z=x/y;
	printf("%d\n",z);
	return 0;
}