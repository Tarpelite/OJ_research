#include <stdio.h>
int gcd(int);
int main()
{
	int n,p;
	scanf("%d",&n);
	p=n+1;
	while(gcd(p)==0) p++;
	printf("%d",p);
	return 0;
}
int gcd(int x)
{
	int flag=0,i;
	for(i=2;i<x;i++)
	{
		if(x%i==0) flag++;
	}
	if(flag>=1) return 0;
	else return 1;
}