#include<stdio.h>
int f(int a);
int main()
{
	int a;
	scanf("%d",&a);
	a++;
	while(f(a)==0)
	{
		a++;
	}
	printf("%d",a);
	return 0;
}
int f(int a)
{
	int prime=1;
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			prime=0;
			break;
		}
	}
	return prime;
}