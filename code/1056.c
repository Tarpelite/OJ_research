#include<stdio.h>
int N(int,int,int,long long []);
int M(int,int,int,long long []);
int main()
{
	int n,K,l,r;
	long long a[100010],H[100010];
	scanf("%d %d",&n,&K);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<K;i++)
	{
	  scanf("%d %d",&l,&r);
	  int p=N(n,l,r,a);
	  int q=M(n,l,r,a);
	  int s,t;
	  s=(p>q)?q:p;//min
	  t=(p>q)?p:q;//max
	  H[i]=a[s];
	for(int k=s+1;k<=t;k++)
	  {
		H[i]=H[i]^a[k];
	  }
	}
	
	for(int i=0;i<K;i++)
	printf("%lld\n",H[i]);
	return 0;
}
int N(int n,int l,int r,long long a[])
{
	long long ans=0;
	for(int i=l;i<=r;i++)
	{
	ans=ans+a[i];	
	}
	return ans%n;
}
int M(int n,int l,int r,long long a[])
{
	long long ans=1;
	for(int i=l;i<=r;i++)
	{
		ans=ans*a[i]%n;
	}
	return ans;
}