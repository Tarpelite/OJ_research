#include <stdio.h>
int N(int l,int r,int n,int *arr)
{
	int sum=0;
	for(int i=l;i<=r;i++)
	{
		sum+=arr[i];
		sum=sum%n;//这句不能写在for大括号外面。。。 
	}
	return sum;
}
int M(int l,int r,int n,int *arr)
{
	int sum=1;
	for(int i=l;i<=r;i++)
	{
		sum*=arr[i];
		sum=sum%n;
	}
	return sum;
}
int H(int l,int r,int *arr)
{
	int sum=arr[l];
	for(int i=l+1;i<=r;i++)
	{
		sum=sum^arr[i];
	}
	return sum;
}
int main()
{
	int n,K,arr[100],i,j; 
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<K;j++)
	{
		int l,r;
		scanf("%d %d",&l,&r);
		int num_m=M(l,r,n,arr);
		int num_n=N(l,r,n,arr);
		int max=num_m>num_n?num_m:num_n;
		int min=num_m+num_n-max;
		printf("%d\n",H(min,max,arr));
	}
	return 0;
}