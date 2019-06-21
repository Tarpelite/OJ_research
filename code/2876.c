#include<stdio.h>
long long jiecheng(long long x)
{	long long q=1;
	long long i;
	if(x==0)
	return 1;
	else{
	
	for(i=1;i<=x;i++)
	q*=i;}
	return q;
}
int main()
{
	long long m,n;
	scanf("%lld%lld",&m,&n);
	if(m<n)
	printf("1");
	else
	{
	long long m1=jiecheng(m);
	long long n1=jiecheng(n);
	long long p=jiecheng(m-n);
	long long t=m1/(n1*p);
	if(n==0)
	printf("1");
	else
	printf("%lld",t);}
	return 0;
	
}