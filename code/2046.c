#include<stdio.h>
int main()
{
	int m,n,i;
	long long a,b,c,d;
	scanf("%d %d",&m,&n);
	if(m>n)
	{
	a=1;
	b=1;
	c=1;
	for(i=1;i<m+1;i++)
	 a=a*i;
	for(i=1;i<n+1;i++)
	 b=b*i;
	for(i=1;i<m-n+1;i++)
	 c=c*i;
	d=a/(b*c);
	}
	else
	d=1;
	printf("%lld",d);

  return 0;
}