#include<stdio.h>
int f(int x,int y){
	if(y>=x||y==0) return 1;
	else return f(x-1,y-1)+f(x-1,y);
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",f(m,n));
	return 0;
}