#include <stdio.h>
#include <stdlib.h>
int arr[10000100];
int cmp(const void * a, const void * b)
{
   return (*(int*)a-*(int*)b);
}
int main()
{
	int n,i,j,k;
	int val=1;
	int times=1;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	qsort(arr,n, sizeof(int),cmp);
	scanf("%d",&k);
	if(k==1)
	{
		printf("%d",arr[n-1]);
		for(i=n-2;i>=0;i--)
			if(arr[i]==arr[n-1]) times++;
		printf(" %d",times);
		return 0;
	}
	for(i=n-2;i>=0;i--)
	{
		if(arr[i]==arr[i+1]) continue;
		else
		{
			val++;
			if(val==k)
			{
				printf("%d",arr[i]);
				for(j=i-1;j>=0;j--)
					if(arr[j]==arr[i]) times++;
				printf(" %d",times);
				return 0;
			}
		}
	}
}