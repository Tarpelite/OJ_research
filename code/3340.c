#include<stdio.h>
int zuhe(int m,int n)
{
	int x=1,y=1;
	for(int i=m;i>=m-n+1;i--)
	{
		x*=i;
	}
	for(int i=1;i<=n;i++)
	{
		y*=i;
	}
	return (x/y);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(n==0) printf("0");
	else 
	{
		int ans;
		ans=zuhe(m,n);
		printf("%d",ans);
	}
	return 0;
}