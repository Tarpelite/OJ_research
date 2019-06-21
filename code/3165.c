#include<stdio.h>
int zuheshu(int x,int y);
int main() 
{
	int m,n,x;
	scanf("%d%d",&m,&n);
	x=zuheshu(m,n);
	printf("%d",x);
}
int zuheshu(int x,int y)
{
	if(y==1)
	return x;
	if(x==y)
	return 1;
	return zuheshu(x-1,y)+zuheshu(x-1,y-1);
}