#include <stdio.h>
#include <math.h>
int isz(int n)
{
	int i;
	if(n==2)return 1;
	if(n==3)return 1;
	for(i=2;i<=(int)(sqrt(n));i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		if(isz(i))break;
	}
	printf("%d",i);
	return 0;
}