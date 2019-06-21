#include <stdio.h>
int main()
{
	int n,m,s,a=1,b=1,c,k;
	scanf("%d%d",&m,&n);
	c=n;
	if(n==0)
	{
		s=1;
	}
	else
	{
	   while(n>=1)
	   {
		a=a*n;
		n=n-1;
	   }
	   n=c;
	   k=m-n+1; 
	   while(m>=k)
	   {
		b=b*m;
		m=m-1; 
	   }
	   s=b/a;
	}
	printf("%d",s);
	return 0;
 }