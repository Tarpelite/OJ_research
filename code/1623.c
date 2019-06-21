#include <stdio.h>

int main()
{
	int a[100000]={0},n,number,k,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&number);
		a[number]++;
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