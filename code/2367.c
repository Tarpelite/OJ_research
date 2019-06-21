#include<stdio.h>
long int JX (int);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(0==m||0==n)
	return 0;
	if(m<n)
	return 1;
	if(m>=n&&n>0)
	printf("%d",JX(m)/JX(n)/JX(m-n));
}
long int JX(int x)
{
	long int sum=1;
	if(x==0)
	return 1;
	for(int i=1;i<=x;i++)
	sum*=i;
	return sum;
}