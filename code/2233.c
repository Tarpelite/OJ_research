#include <stdio.h>

int main()

{
	int a[200000]={0},i,n,b,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		a[b]++;
	}
	scanf("%d",&k);
	for(i=199999;i>=0;i--)
	{
		if(a[i]!=0)
		{
			k--;
			if(k==0)
			{
				printf("%d %d",i,a[i]);
				break;
			}
		}
	}
	
	return 0;
}