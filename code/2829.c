#include <stdio.h>
long long f(int);
int main()
{
	int m,n;
	long long ans;
	scanf("%d%d",&m,&n);
	if (m==0 || n==0)
	{
		printf("%d",0);	
	}	
	else
	{
		ans=f(m)/f(n)/f(m-n);
		printf("%lld",ans);
	}
	return 0;
}
long long f(int x)
{
	if (x==0)	return 1;
	else{
		if (x==1)	return 1;
		return x*f(x-1);
	}
}