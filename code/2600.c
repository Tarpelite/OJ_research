#include<stdio.h>
long long zuhe(int a,int b);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%lld",zuhe(m,n));
	return 0;
}
long long zuhe(int a,int b)
{
	
	int i;
	long long int sum=1;
	if(a==0||b==0)
		sum=0;
	else
	{
	if(b<a-b)
		b=a-b;
	for(i=b+1;i<=a;i++)
		sum*=i;
	for(i=1;i<=a-b;i++)
		sum/=i;
	}
	return sum;
}