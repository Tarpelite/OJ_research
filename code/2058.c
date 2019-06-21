#include<stdio.h>
int zhi(int n)
{
	int i,flag=0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			flag=1;
	}
	if(flag==1)
		return 0;
	else
		return 1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		if(zhi(i))
		{
			printf("%d",i);
			break;
		}
	}
}