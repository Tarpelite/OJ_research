#include<stdio.h>
long long C(int,int);
long long fac(int);
int main()
{
	int m,n;
	int ans;
	scanf("%d%d",&m,&n);
	ans=C(m,n);
	m=m>n?m:n;
	
//	printf("%d\n%d\n%d\n",fac(m),fac(n),fac(m-n));
	printf("%d",ans);
	return 0;	
}

long long C(int m,int n)
{
	return (fac(m)/(fac(n)*fac(m-n)));
}

long long fac(int x)
{
	if(x==0)
	{
		return 1;
	}
	return x*fac(x-1);
}