#include<stdio.h>
int func(int a);

int main()
{
	int a,k,n;
	scanf("%d",&a);
	k=a+1;
	while(n=func(k)!=1)
	{
		k++;
	}
	printf("%d",k);
	return 0;
 }

int func(int a)
{
	int i,k;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		break;
	}
	if(i==a)
	return 1;
	else
	return 0;
}