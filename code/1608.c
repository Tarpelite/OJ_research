#include<stdio.h>
int main()
{
	int i,m,n,a=1,b=1;
	scanf("%d%d",&m,&n);
	
	for(i=m;i>=m-n+1;--i)
	{
		a=a*i;
	}
	
	for(i=1;i<=n;++i)
	{
		b=b*i;
	}
	printf("%d",a/b);
	return 0;
}