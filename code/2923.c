#include<stdio.h>
int c(int x,int y)
{
	if(y>x||x<1||y<1){
		return 0;
	}
	if(y==1){
		return x;
	}
	if(x==y){
		return 1;
	}
	return c(x-1,y)+c(x-1,y-1);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int z;
	z=c(m,n);
	printf("%d",z);
	return 0;
 }