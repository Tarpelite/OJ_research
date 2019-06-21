#include<stdio.h>
int main()
{
	int n,m,a,b=1,c,d=1,x;
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		return 0;
	}
	for(a=m;a>=m-n+1;a--)
	{
		b=b*a;
	}
	for(c=1;c<=n;c++)
	{
		d=d*c;
	}
	x=b/d;
	printf("%d",x);
	return 0;
}