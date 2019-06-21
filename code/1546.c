#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int n,m,k;
	scanf("%d",&n);
	int a[100000]={0},i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);
	int k0=0;
	for(i=99999;i>=1;i--)
	{
		if(a[i]!=0)
		k0++;
		if(k0==k)
		break;
	}
	printf("%d %d",i,a[i]);
	return 0;
}