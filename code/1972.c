#include <stdio.h>
int arr[100000];
int main()
{
	int n,i,a,k,count=0,xun;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		arr[a]+=1;
	}
	scanf("%d",&k);
	for(xun=100000;xun>=0;xun--)
	{
		if(arr[xun]!=0)
			count++;
		if(count==k)
		{
			printf("%d %d",xun,arr[xun]);
			break;
		}
	}
	return 0;
}