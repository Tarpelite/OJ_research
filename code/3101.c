#include<stdio.h>
int n,a[100010],k;
int main()
{
	int i,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	scanf("%d",&k);
	for(i=100000;i>=0;i--)
	{
		if(a[i])	k--;
		if(!k)
		{
			printf("%d %d\n",i,a[i]);
			return 0;
		}
	}
}