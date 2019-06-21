#include<stdio.h>
int main()
{
	int m,n,i,x=1,y=1;
	scanf("%d %d",&m,&n);
	for(i=2;i<=n;i++) x*=i;
	for(i=m;i>m-n;i--) y*=i;
	y/=x;
	printf("%d\n",y);
	return 0;
}