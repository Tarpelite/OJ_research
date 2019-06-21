#include<stdio.h>
int f(int x,int y)
{
	if(x==y)
		return 1;
	if(y==1)
		return x;
	return f(x-1,y-1)+f(x-1,y);
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",f(n,m));
	return 0;
}