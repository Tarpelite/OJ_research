#include<stdio.h>
int main()
{
	int a[100001],i,k,n,g;
	for(i=1;i<100001;i++)
	a[i]=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&g);
		a[g]++;
		
	}
	scanf("%d",&k);
	for(i=100000;i>0;i--)
	
	{
		if(a[i]!=0)
		k--;
		if(k==0)
		break;
	}
	printf("%d %d",i,a[i]);
	return 0;
}