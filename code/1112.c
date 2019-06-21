#include<stdio.h>
#define max(x,y) x>y?x:y
#define min(x,y) x>y?y:x

int n;
int a[100];

int M(int l,int r)
{
	int i,sum=1;
	for(i=l;i<=r;i++)
	{
		sum=(sum*a[i])%n;
	}
	return sum;
}

int N(int l,int r){
	int i,sum=0;
	for(i=l;i<=r;i++)
	{
		sum=sum+a[i];
	} 
	sum = sum %n;
	return sum;
} 

int H(int l,int r){
	int i,sum=a[l];
	for(i=l+1;i<=r;i++)
	{
		sum=sum ^ a[i];
	} 
	return sum;
} 

int main()
{
	int k,i=0,j=0,l,r,result;
	scanf("%d%d",&n,&k);
	for(;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(;j<k;j++)
	{
		scanf("%d%d",&l,&r);
		result = H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
		printf("%d\n",result);
	}
	return 0;
}