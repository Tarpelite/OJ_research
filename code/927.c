#include<stdio.h>
int f(int);
int main()
{
	int a,b,c;
	scanf("%d",&a);
	for(b=a+1;f(b)!=1;b++){}
	printf("%d",b);
	return 0;
}

int f(int a)
{
	int i,n;
	for(i=1,n=0;i<=a;i++)
		{
			if(a%i==0)
				n++;
		}
	if(n==2)
		return 1;
	else
		return 0;
}