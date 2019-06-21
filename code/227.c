#include <stdio.h>


int main() 
{
	int i,n,k;
	int j=0;
	int t;
	int a[100001]={0};
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t = 0;
		scanf("%d",&t);
		a[t]++;
	}
	scanf("%d",&k);
	for(i = 100000;j<k;i--)
	{
		if ( a[i] != 0)
		    j++;

	}
	 printf("%d %d",i+1,a[i+1]);
	return 0;
}