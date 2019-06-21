#include<stdio.h>
int zhishu(int);
int main(void)
{
	int a,i;
	scanf("%d",&a);
	for(i=a+1;zhishu(i)!=1;i++);
	printf("%d",i);
}
int zhishu(int o)
{
	int j,k=0;
	for(j=2;j<o;j++)
	{
		if(o%j==0)
		{
			return 2;
		}
	}
	return 1;
}