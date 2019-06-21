#include<stdio.h>

int a[100001]={0};

int main(void)
{
	int n,i,k;
	int x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		a[x]++;
	}
	scanf("%d",&k);
	i=100001;
	for(;k!=0;k--)
	{
		for(i--;i>=0;i--)
		{
			if(a[i]==0)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	printf("%d %d",i,a[i]);
}