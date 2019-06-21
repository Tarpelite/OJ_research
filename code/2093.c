#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(a,b)((a)>=(b)?(a):(b))
#define min(a,b)((a)>=(b)?(b):(a))
	
int main()
{
	int l,r,i,n,A[200],k,x,y,a,b,c;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
	scanf("%d",&A[i]);
	}
	i=0;
	
	while(scanf("%d%d",&l,&r)!=EOF)
	{
		a=0;
		b=1;
	for(i=l;i<=r;i++)
	{
		a=a+A[i];
	}
	for(i=l;i<=r;i++)
	{
		b=b*A[i];
		b=b%n;
	}
	x=min(a%n,b%n);
	y=max(a%n,b%n);
	
	c=A[x];
	for(i=x+1;i<=y;i++)
	{
		if(x==y) printf("%d",A[x]);
		else
		c=c^A[i];
	}
	printf("%d\n",c);
	}
	return 0;
}