#include<stdio.h>
long long time(int);
int main()
{
	int m,n,o;
	long long c;
	scanf("%d%d",&m,&n);
	o=m-n;
	c=time(m)/(time(n)*time(o));
	printf("%d",c);
	return 0;
}
long long time(int x)
{
	int i=x;
	long long sum=1;
	for(i=x;i>0;i--)
	{
		sum=sum*x;
		x--;
	}
	return sum;
}