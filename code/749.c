#include<stdio.h>
#include<math.h>
#include<string.h>
int N(int l,int r,int a[],int n)
{
	int sum=0,i;
	for(i=l;i<r+1;i++)
	{
		sum+=a[i];
		sum=sum%n;
	}
	
	return sum;
}
int M(int l,int r,int a[],int n)
{
	int sum=1,i;
	for(i=l;i<r+1;i++)
	{
		sum*=a[i];
		sum=sum%n;
	}
	
	return sum;
}
int H(int l,int r,int a[],int n)
{
	int sum=a[l],i;
	for(i=l+1;i<r+1;i++)
	sum=sum^a[i];
	return sum;
}
int max(int a,int b)
{
	int max;
	max=a;
	if(b>a)
	max=b;
	return max;
}
int min(int a,int b)
{
	int min;
	min=a;
	if(b<a)
	min=b;
	return min;
}

int main()
{
	int n,k,l,r,i,c;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		c=H(min(N(l,r,a,n),M(l,r,a,n)),max(N(l,r,a,n),M(l,r,a,n)),a,n);
		printf("%d\n",c);
	}
	
	
	return 0;
}