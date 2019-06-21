#include<stdio.h>
int niu(int a[],int l,int r,int n)
{
	int sum=0,i;
	for(i=l;i<=r;i++)
	{
		sum=sum+(a[i]%n);
	}
	return sum;
}

int mou(int a[],int l,int r,int n)
{
	int q,sum=1,i;
	for(i=l;i<=r;i++)
	{
		q=a[i]%n;
		sum=sum*q;
		sum=sum%n;
	}
	return sum;
}

int hug(int a[],int l,int r)
{
	int sum,i;
	sum=a[l];
	for(i=l+1;i<=r;i++)
	{
		sum=sum^a[i];
	}
	return sum;
}

int max(int x,int y)
{
	int max=x;
	if(x<y)
		max=y;
	return max;
}

int min(int x,int y)
{
	int min=x;
	if(x>y)
		min=y;
	return min;
}


int main()
{
	int n,k,i,a[100000],l,r,nl,ml,min1,max1,hl[100000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&l,&r);
		nl=niu(a,l,r,n)%n;
		ml=mou(a,l,r,n);
		min1=min(nl,ml);
		max1=max(nl,ml);
		hl[i]=hug(a,min1,max1);
	}
	for(i=0;i<k;i++)
	{
		printf("%d\n",hl[i]);
	}
	
}