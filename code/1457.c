#include<stdio.h>

int main()
{
	long long m,n,a=1,b=1,c=1,d,i;
	scanf("%lld%lld",&m,&n);
	if(m>n){
	for(i=1;i<=m;i++)
	{
		a=a*i;
	}
	for(i=1;i<=n;i++)
	{
		b=b*i;
	}
	for(i=1;i<=m-n;i++)
	{
		c=c*i;
		}
		d=a/b/c;}
		else if(m==n){
		d=1;
		}
		printf("%lld",d);
		
   return 0;
   }