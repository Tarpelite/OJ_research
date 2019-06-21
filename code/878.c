#include <stdio.h>
int zs(int);
int main()
{
	int n;
	scanf("%d",&n);
	do
	{
		n++;
	}
	while(zs(n)!=1);
	printf("%d",n);
}
int zs(int n)
{
	int i;
	for(i=n-1;n%i!=0;i--)
	{
	}
	return i==1;
}