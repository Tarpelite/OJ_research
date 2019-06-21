#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	unsigned long long i,a=1,b=1,ans;
	for (i=m;i>=m-n+1;i--)
	  a=(unsigned long long )a*i;
	for (i=1;i<=n;i++)
	  b=(unsigned long long)b*i;
	ans=(unsigned long long)a/b;
	printf("%llu\n",ans);
	
	return 0;
}