#include<stdio.h>
int main()
{
	int n,a[100001]={0},i,x,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	for(i=100000;i>0;i--)
	{
		if(a[i]!=0)
			k--;
		if(k==0)
			break;
	}
	printf("%d %d",i,a[i]);
	return 0;
}