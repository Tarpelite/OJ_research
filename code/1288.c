#include<stdio.h>
#define min(a,b) a<b?a:b
#define max(a,b) a<b?b:a
int a[105],n;
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
 
int main()
{
	int K,ans[105];
	int l,r;
	int x,y,i;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<K;i++)
	{
		scanf("%d%d",&l,&r);
		x = N(l,r);
		y = M(l,r);
		ans[i] = H(min(x,y),max(x,y));
	}
	for(i=0;i<K;i++)
	{
		printf("%d\n",ans[i]);
	}
}

int N(int l,int r)
{
	int i=l;
	if(r-i==0)
	{
		return a[i]%n;
	}
	return (a[i]+N(++i,r))%n;
}
int M(int l,int r)
{
	int i=l;
	if((r-i)==0)
	{
		return a[i]%n;
	}
	return (a[i]%n*M(++i,r))%n;
}
int H(int l,int r)
{
	int res,i;
	if(l==r)
	{
		return a[l];
	} else
	{
		res = a[l]^a[l+1];
		for(i=l+2;i<r+1;i++)
		{
			res ^= a[i];
		}
	}
	return res;
}