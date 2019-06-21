#include <stdio.h>

int arr[100010];

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		arr[a]+=1;
	}
	int l;
	int count=0;
	scanf("%d",&l);
	int xun;
	for(xun=100000;xun>=0;xun--)
	{
		if(arr[xun]!=0)
		{
			count++;
		}
		if(count==l)
		{
			printf("%d %d",xun,arr[xun]);
			break;
		}
	}
	return 0;
}