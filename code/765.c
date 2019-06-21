#include<stdio.h>
int jc[100010];
int main()
{
	int n,k,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		jc[k]++;
	}
	scanf("%d",&k);
	int cnt=0;
	for(i=100000;i>=1;i--)
	{
		if(jc[i])
		{
			cnt++;
			if(cnt==k)
			{
				printf("%d %d",i,jc[i]);
				break;
			}
		}
	}
	return 0;
}