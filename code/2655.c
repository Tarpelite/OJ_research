#include<stdio.h> 

int main()
{
	int m,n;
	long long sum1=1,sum2=1;
	scanf("%d%d",&n,&m);
	for(int i=m+1;i<=n;i++)
	{
		sum1=sum1*i;
	}
	for(int i=1;i<=(n-m);i++)
	{
		sum2=sum2*i;
	}

	printf("%d",sum1/sum2);
}