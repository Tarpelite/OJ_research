#include<stdio.h>

int zhishu(int);
int main()
{
	int a;
	scanf("%d",&a);
	a=a+1;
	while(zhishu(a)==0)
	{
		a=a+1;
	}
	printf("%d",a);
	return 0;
	
}

int zhishu(int x)
{
	int i=2;
	while(x%i!=0)
	{
		i=i+1;
	}
	if(i==x)return 1;
	else return 0;
	
}