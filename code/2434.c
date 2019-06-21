#include<stdio.h>
long long c(int,int);
int main()
{
	int m,n;
	long long x;
	scanf("%d%d",&m,&n);
	x=c(n,m);
	printf("%d",x);
	return 0;
}

long long c(int m,int n)
{
	int i,j;
	long long ans=1;
	if(m<n-m)
	m=n-m;
	for(i=m+1;i<=n;i++)
	{
		ans*=i;
	}
	for(j=1;j<=n-m;j++)
	{
		ans/=j;
	}
	return ans;
}