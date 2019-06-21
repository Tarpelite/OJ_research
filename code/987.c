#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,k,x;
	int a[100001]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a[x]+=1;
	}
	scanf("%d",&k);
	for(i=100000;k>1;i--)
	{
		if(a[i])
		k--;
	}
	printf("%d %d",i,a[i]);
	return 0;
}