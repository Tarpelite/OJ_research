#include<stdio.h>
#include <stdlib.h> 
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void)
{
	int n,k;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	qsort (a, n, sizeof(int), compare);
	for(int i=0;i<=n/2-1;i++)
	{
		a[i]=a[i]^a[n-1-i];
		a[n-1-i]=a[i]^a[n-1-i];
		a[i]=a[i]^a[n-1-i];
	}
	int c=1,i=0,v;
	while(c<=k)
	{
		if(a[i]>a[i+1]&&c!=k)
		{
			c++;
			v=1;
		}
		else if(a[i]>a[i+1]&&c==k)
		{
			c++;
		}
		else v++;
		i++;
	}
	printf("%d %d",a[i-1],v);
	return 0;
}