#include<stdio.h>
int cc(int n,int m)
{
	if(m==1)
		return n;
	if(m==n)
		return 1;
	else
		return cc(n-1,m-1)+cc(n-1,m);
}
int main()
{
	int n,m,a;
	scanf("%d%d",&n,&m);
	a=cc(n,m);
	printf("%d",a);
	return 0;
}