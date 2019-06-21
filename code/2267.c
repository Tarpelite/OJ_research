#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int zhishu(int a);	
int main()
{
	int a;
	scanf("%d",&a);
	a=a+1;
	while (zhishu(a))
	{
		a=a+1;
	}
	printf("%d",a);
	return 0;
}

int zhishu(int a)
{
	int b=a-1;
	while(a%b!=0)
	{
		b=b-1;
	}
	if(b==1)
	return 0;
	return 1;
}