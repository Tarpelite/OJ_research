#include<stdio.h>
#include<stdlib.h>
int  N(int,int);
int  M(int,int);
int  H(int,int);
int *num;
int n;
int main() 
{
	int k;
	scanf("%d%d",&n,&k);
	num=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++) scanf("%d",&num[i]);
	for(int i=1;i<=k;i++)      
	{
		int l,r;
		scanf("%d%d",&l,&r);
		int min=N(l,r)<M(l,r)?N(l,r):M(l,r);
		int max=N(l,r)>M(l,r)?N(l,r):M(l,r);
		printf("%d\n",H(min,max));
	}
	free(num);
	return 0;
}

int N(int l,int r)       
{
	int sum=0;
	for(;l<=r;l++) 
	{
		sum+=num[l];
		sum%=n;
	}
	return sum;
}

int M(int l,int r)
{
	int result=1;
	for(;l<=r;l++)
	{
		result*=num[l];
		result%=n;
	}
	return result;
}

int H(int l,int r)
{
	int result=num[l];
	l++;
	for(;l<=r;l++)
	{
		result^=num[l];
	}
	return result;
}