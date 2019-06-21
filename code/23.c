#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a;
	a=n;
	int sum=1;
	for(int i=0;i<n;i++)
	{
		sum=sum*m;
		m=m-1;
	}
	for(int i=0;i<n;i++)
	{
		sum=sum/a;
		a=a-1;
	}
	printf("%d",sum);
	return 0;
}