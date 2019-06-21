#include <stdio.h>
#include <stdlib.h>
int main() 
{
	long long a=1,b=1,c=1;
	int m,n,x,i;
	int ans;
	scanf("%d%d",&m,&n);
	x=m-n;
	for(i=1;i<=m;i++)
	a=a*i;
	for(i=1;i<=n;i++)
	b=b*i;
	for(i=1;i<=x;i++)
	c=c*i;
	ans=a/b/c;
	printf("%d",ans);
	return 0;
}