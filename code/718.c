#include<stdio.h>
long long jiecheng(int n)
{
	int i;
	long long sum=1;
	for(i=1;i<=n;i++)
	sum*=i;
	return sum;
}

int main()
{
	int m,n;
	long long d;
	scanf("%d%d",&m,&n);
	if(m==0)
	{
		printf("1");
		return 0;
	}

	else
	{	
	if(n==0)
	{
			printf("1");
			return 0;
		}
		else if(n==m)
		{
			printf("1");
			return 0;
		}
		else
		{
		d=jiecheng(m)/(jiecheng(m-n)*jiecheng(n));
		printf("%lld",d);
		return 0;
		}

	}
	
}