#include<stdio.h>
long long fac(int x);
int main()
{
	int m,n,c;
	scanf("%d%d",&m,&n);
	c=fac(m)/(fac(n)*fac(m-n));
	printf("%d",c);
	return 0;
}
long long fac(int x)
{
	int i;
	long long s=1;
	for(i=1;i<=x;i++)
	s=s*i;
	return s;
}