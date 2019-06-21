#include <stdio.h>
#define M 100003
int a[M];
int main()
{
	int n,k;
	int sum=0;
	int sum1=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int m;
		scanf("%d",&m);
		a[m]++;
		if(m>sum)
			sum=m;
	}
	scanf("%d",&k);
	for(int i=sum;i>=1;i--)
	{
		if(a[i]>0)
			sum1++;
		if(sum1==k)
		{
			printf("%d ",i);
			printf("%d",a[i]);
			break;
			}
	}
	return 0;
}