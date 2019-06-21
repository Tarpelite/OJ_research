#include<stdio.h>
int isprime(int);
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	i=n+1;
	for(;isprime(i)!=1;i++);
	printf("%d",i);
	return 0;
 } 
 int isprime(int x)
{
	if(x==1)
	return 0;
	for(int now=2;now*now<=x;now++)
	if(x%now==0)
	return 0;
	return 1;
}