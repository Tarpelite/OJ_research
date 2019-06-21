#include<stdio.h>
int main()
{
	int n,k,i=0,j,m,max=0,s=0,r=0,a[100005]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		a[m-1]+=1;
		if(max<=m)	
		{
			max=m;
		}
	}
	scanf("%d",&k);
	for(j=0;j<max;j++)
	{
		if(a[j]!=0)
		{
			s+=1;
		}
	}
	for(j=0;j<max;j++)
	{
		if(a[j]!=0)
		{
			r+=1;
		}
		if(r==s-k+1)
		{
			printf("%d %d",j+1,a[j]);
		}
	}
	return 0;
}