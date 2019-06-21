#include<stdio.h>
int main()
{
	long long m,n,a=1,b=1,c=1,i;
	scanf("%lld %lld",&m,&n);
	if(m==0||n==0)
    printf("0");
    else if(n>m)
    printf("%lld",m);
    else
    {
    	for(i=m;i>=1;i--)
    	a=a*i;
    	for(i=n;i>=1;i--)
    	b=b*i;
    	for(i=m-n;i>=1;i--)
    	c=c*i;
    	printf("%lld",a/(b*c));
    	
	}
return 0;}