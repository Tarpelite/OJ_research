#include <stdio.h>
int a[100001]={0}; 
int main() 
{
	int n,k;
	scanf("%d",&n);
	
	int i,b;
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		a[b]++;
	}
	
	scanf("%d",&k);
	
	int c,j=1,x;
	for (i=100000;j<=k;i--)
	{
		if(a[i]!=0)
		{
			c=i;
			j++;
			x=a[i];
		}
	}
	printf("%d %d",c,x);
	return 0;
}