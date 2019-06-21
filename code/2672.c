#include<stdio.h>

int main()
{
	int m,n,a=1,b=1,out,i;
	
	scanf("%d%d",&m,&n);
	for(i=2;i<=n;i++)
	{
		a*=i;
	}
	for(i=m;i>=m-n+1;i--)
	{
		b*=i;
	}
	out=b/a;
	printf("%d",out);
	return 0;	
}