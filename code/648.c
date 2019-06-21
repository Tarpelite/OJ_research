#include <stdio.h>

int arr[100010];

int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		arr[a]+=1;
	}
	int k;
	int count=0;
	scanf("%d",&k);
	int x;
	for(x=100000;x>=0;x--)
	{
		if(arr[x]!=0)
		{
			count++;
		}
		if(count==k)
		{
			printf("%d %d",x,arr[x]);
			break;
		}
	}
	return 0;
}