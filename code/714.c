#include<stdio.h>
int zs(int a)
{
	int j;
	for(j=2;j<=a-1;j++)
	{
		if(a%j==0)
		{
		return 0;
		}
	}
	return 1;
}
int main()
{
	int a,i;
	scanf("%d",&a);
	if(a==1)
	printf("2");
	else
	{
	for(i=a+1;i<=1000000;i++)
	{
		if(zs(i))
		{
			printf("%d",i);
			break;
		}
	}
	}
	
	return 0;
 }