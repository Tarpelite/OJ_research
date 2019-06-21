#include<stdio.h> 
#include<string.h>
int na(int,int);
int ma(int,int); 
int ha(int,int);
int a[105];
int min(int,int);
int max(int,int);
int n,m;
int main()
{
	int l,r;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",ha( min(na(l,r),ma(l,r)) , max(na(l,r),ma(l,r))));
	}
}
int na(int l,int r)
{
	int ans=0;
	for(int i=l;i<=r;i++)
		ans+=a[i]%n;
	ans%=n;
	return ans;
}
int ma(int l,int r)
{
	int ans=1;
	for(int i=l;i<=r;i++)
	{
		ans*=a[i]%n;
		ans%=n;
	}
	return ans;
}
int ha(int l,int r)
{
	int ans=a[l];
	for(int i=l+1;i<=r;i++)
		ans^=a[i];
	return ans;
}
int min(int a,int b)
{
	if(a>b)return b;
	else return a;
}
int max(int a,int b)
{
	if(a>b)return a;
	return b;
}