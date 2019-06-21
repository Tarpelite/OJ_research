#include<stdio.h>
int main()
{
	long long int n,m,x,y,i,j,k;
	x=1;
	y=1;
	scanf("%lld%lld",&m,&n);
	for(i=m;i>m-n;i--)
	x=x*i;
	for(j=1;j<=n;j++)
	y=y*j;
	k=x/y;
	printf("%lld",k);
	return 0;
}