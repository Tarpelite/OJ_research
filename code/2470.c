#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
int n,k,i;
long long ans=1;
int main()
{
	scanf("%d%d",&n,&k);
	for(i=0;i<k;++i) ans*=n-i;
	for(i=1;i<=k;++i) ans/=i;
	printf("%lld",ans);
	return 0;
}