#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	long long i,a=1,b=1,ans;
	for (i=m;i>=m-n+1;i--)
	  a*=i;
	for (i=1;i<=n;i++)
	  b*=i;
	ans=a/b;
	printf("%lld\n",ans);
	
	return 0;
}