#include<stdio.h>
#include<math.h>
int f(int n,int m)
{
	int x;
	if(m==0) x=1;
	else if(n==1) x=1;
	else if(m==n) x=1;
	else x=f(n-1,m-1)+f(n-1,m);
	return x;
}
int main()
{
	int m,n,x;
	scanf("%d %d",&n,&m);
	x=f(n,m);
	printf("%d",x);
	return 0;
}