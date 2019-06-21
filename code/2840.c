#include<stdio.h>
#include<math.h>
int main()
{
	long long n1=1,m1=1,c1=1,m,n,i=1,sum;
	scanf("%lld%lld",&m,&n);
	if (m==0||n==0)
	{
		printf("1");
	}
	if (m!=0&&n!=0)
	{
		for (i=1;i<=m;i++)
	m1=m1*i;
	i=1;
	for (i=1;i<=n;i++)
	n1=n1*i;
	i=1;
	for (i=1;i<=(m-n);i++)
	c1=c1*i;
	sum=m1/(n1*c1);
	 printf("%lld",sum);
	
	}
	 return 0;
}