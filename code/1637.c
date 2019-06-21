#include<stdio.h>
int zhishu(int x);
int main()
{
	int n,m;
	scanf("%d",&n);
	m=n+1;
	while(zhishu(m)==0)
	{
		m++;
	}
	printf("%d",m);
	return 0;
 } 
int zhishu(int x)
{
	int i=0,j=1;
	while(j<x)
	{
		if(x%j==0)
		i++;
		j++;
	}
	if(i==1)
	return 1;
	else
	return 0;
}