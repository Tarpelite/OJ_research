#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	int ans1=1,ans2=1;
	int i;
	for(i=n;i>=n-m+1;--i)
		ans1=ans1*i;
	for(i=1;i<=m;++i)
		ans2=ans2*i;
	printf("%d",ans1/ans2);
	return 0;
}