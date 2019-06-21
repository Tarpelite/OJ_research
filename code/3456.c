#include <stdio.h>
int main()
{
	int m,n,i,j,x,y;
	long long k;
	scanf("%d%d",&m,&n);
	i=m-1;
	x=m,y=n;
	while(i>=(x-n+1))
	{
		m=m*i;
		i--;
	}
	if(y!=0)
	{
		j=n-1;
	    while(j>=1)
	    {
		    n=n*j;
		    j--;
	    }
	    k=m/n;
	}
	if(y==0&&x!=0)
	{
		printf("1");
		return 1;
	}
	if(y==0&&x==0)
	{
		printf("0");
		return 1;
	}
	printf("%lld",k);
	return 0;
}