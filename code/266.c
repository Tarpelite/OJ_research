#include<stdio.h>
int zuheshu(int m,int n)
{
	int x=1,y=1;
	for(int i=m;i>=m-n+1;i--)
	{
		x=x*i;
	}
	for(int i=1;i<=n;i++)
	{
		y=y*i;
	}
	return (x/y);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(n==0) printf("1");
	else 
	{
		int ans;
		ans=zuheshu(m,n);
		printf("%d",ans);
	}
}