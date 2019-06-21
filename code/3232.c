#include <stdio.h>
long long a(int m,int n)
{
	int i;
	long long s;
	for(i=1,s=1;i<n+1;i++)
	{
		s=s*(m-i+1);
	}
	return s;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(n>m)printf("%d",1);
	else if(n==0)printf("%d",1);
	else
	{
		printf("%lld",a(m,n)/a(n,n));
	}
	return 0;
}