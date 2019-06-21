#include<stdio.h>
int zuhe(int m,int n);
int main()
{
	int m,n;
	int sum;
	scanf("%d%d",&m,&n);
	sum=(int)zuhe(m,n);
	printf("%d",sum);
	
	return 0;
}
int zuhe(int m,int n)
{
	double sum=1;
	for(int i=0;i<n;i++)
		{
			sum*=(m-i);
			sum/=(n-i);
			}
	return sum;
}