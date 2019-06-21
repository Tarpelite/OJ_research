#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n==0)
		printf("0");
	else
	{
		int ans=1;
		for(int i=n;i>=n-m+1;i--)
			ans*=i;
		for(int i=2;i<=m;i++)
			ans/=i;
		printf("%d",ans);
	}
	return 0;
}