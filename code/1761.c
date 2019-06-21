#include<stdio.h>
int zhishu(int);
int main()
{
	int a,b;
	scanf("%d",&a);
	b=a+1;
	while(zhishu(b)==0)
	{
	  b++;}
     printf("%d",b);
       return 0;
}
int zhishu(int x)
{
	int z;
	int i;
	i=2;
	while(x%i!=0&&i<=x)
	{i++;}
	if(i==x)
	z=1;
	else
	z=0;
	return z;
	
}