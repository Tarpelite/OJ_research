#include<stdio.h>
int main()
{
	int m,n;
	int i,sum1=1,sum2=1,sum;
	scanf ("%d%d",&m,&n);
	sum1=1;
	sum2=1;
	for (i=m;i>m-n;i--)//上面的 
	{
		sum1*=i;
	}
	for (i=1;i<=n;i++)//n的阶乘 
	{
		sum2*=i;
	}
	sum=sum1/sum2;
	printf("%d",sum);
	return 0;
}