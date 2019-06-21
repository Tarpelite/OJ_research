#include<stdio.h>
int main()
{
	int m,n;
	long long a,b,c;
	long long r;
	int i;
	scanf("%d %d",&m,&n);
	for(i=a=1;i<=m;i++)
	{
		a*=i;
	}
	for(i=b=1;i<=n;i++)
	{
		b*=i;
	}
	for(i=c=1;i<=(m-n);i++)
	{
		c*=i;
	}
	r=a/(b*c);
	printf("%lld\n",r);
	return 0;
	

}