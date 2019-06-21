#include <stdio.h>
int a[10000001];
int main()
{
	int n,k;
	int i,t;
	int s;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	int b[100001]={};
	int c[100001]={};
	for(i=1;i<n+1;i++)
	{
		b[a[i]]+=1;
	}
	for(i=1,t=1;i<=100001;i++)
	{
		if(b[i]!=0)
		{
			c[t]=i;
			t++;
		}
	}
	t=t-1;
	printf("%d ",c[t-k+1]);
	printf("%d",b[c[t-k+1]]);
	return 0;
}