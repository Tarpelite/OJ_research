#include <stdio.h>

int main()
{
	int a[100001]={0},n,i=0,x,k;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&x);
		a[x]=a[x]+1;
		i++;
	}
	scanf("%d",&k);
	for(i=100000;k>1;i--)
	{
		if(a[i]!=0)
		{
			k--;
		}
	}
	printf("%d %d\n",i,a[i]);
	return 0;	
}