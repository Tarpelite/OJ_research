#include<stdio.h>
int zhuheshu(int m,int n)
{
	int a=1,b=1,i;
	for(i=0;i<n;i++)
	{
		a*=m;
		m--;
	}
	for(i=1;i<n+1;i++)
	{
		b*=i;	
	}
	return a/b;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m==0||n==0)
	printf("0");
	else
	printf("%d",zhuheshu(m,n));
	return 0;
}