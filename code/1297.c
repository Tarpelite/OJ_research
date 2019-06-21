#include<stdio.h>
int i=0;
int C(int m,int n);
int main()
{
	int m,n,ans;
	scanf("%d%d",&m,&n);
	ans=C(m,n);
	printf("%d",ans);
	return 0;
}
int C(int m,int n)
{	
	if(n==0||m==n)
	{
		return 1;
	}
	else if(n==1)
	{
		return m;
	}
	return C(m-1,n)+C(m-1,n-1);
}