#include<stdio.h>
int main()
{
	double m,n,b=1,c=1,i,r;
	
	scanf("%lf%lf",&m,&n);
	
	
	for(i=1;i<=n;i++)
	b=b*i;
	
	for(i=m-n+1;i<=m;i++)
	c=c*i;
	
	r=c/b;
	
	if(m==0||n==0)
	r=0;
	
	printf("%.0lf",r);
	
	return 0;
}