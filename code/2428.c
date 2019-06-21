#include<stdio.h>
int main()
{
	int a[100005]={0};
	int n,k,i,via;
	int count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&via);
		a[via]++;
	}
	scanf("%d",&k);
	for(i=100000;i>=0;i--)
	{
		if(a[i]!=0)count++;
		if(count==k)
		{
			printf("%d %d",i,a[i]);
			break;
		}
	}
	return 0; 	
 }