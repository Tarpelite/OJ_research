#include <stdio.h>
void sort(int a[],int l,int r) 
{
	if(l<r)
	{
		int i,j,x;
		i=l;
		j=r;
		x=a[i];
		while(i<j)
		{
			while(i<j&&a[j]>x)
				j--;
			if(i<j)
				a[i++]=a[j];
			while(i<j&&a[i]<x)
				i++;
			if(i<j)
				a[j--]=a[i];
		}
		a[i]=x;
		sort(a,l,i-1);
		sort(a,i+1,r);
	}
}
int num[10000005];
int cnum[10000005];
int main()
{
	int n,i,k,q;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	scanf("%d",&k);
	sort(num,0,n-1);
	
	int j=0;
	cnum[j]=num[j];
	for(i=0;i<n;i++)
	{
		if(num[i]!=cnum[j])
		{
			j++;
			cnum[j]=num[i];	
		}	
	}
	printf("%d ",cnum[j-k+1]);
	q=0;
	for(i=0;i<n;i++)
	{
		if(num[i]==cnum[j-k+1])
			q++;
	}
	printf("%d",q);
	return 0;
}