#include <stdio.h>
int zhishu(int n)
{
	int i,k=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			k=0;
			break;
		}
	}
	return k;
}
int main()
{ 
	int a[110001]={0};
	int k;
	scanf("%d",&k);
	for(int i=2;i<=110000;i++)
	{
		if(zhishu(i))
		{
			a[i]=i;
		}
	}
	for(int i=k+1;i<=110000;i++)
	{
		if(a[i]!=0)
		{	printf("%d",a[i]);
			return 0;
		}	
	}
}