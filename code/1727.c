#include<stdio.h>
int a[101],n;
int main()
{
	int N(int l,int r);int H(int l,int r);int M(int l,int r);int max(int a,int b);int min(int a,int b);
	int l[101],r[101];
	int i,k;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l[i],&r[i]);
	}
		for(i=0;i<k;i++)
	{
		printf("%d\n",H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i]))));
	}
	
}
int N(int l,int r)
{
	long long ans=0;
	for(int i=l;i<=r;i++)
	{
		ans=ans+a[i];
	}
	ans=ans%n;
	return((int)ans);
}
int M(int l,int r)
{
	long long ans=1;
	for(int i=l;i<=r;i++)
	{
		ans=(ans*a[i])%n;
	}
	return((int)ans);
}
int H(int l,int r)
{
	long long ans=a[l];
	for(int i=l+1;i<=r;i++)
	{
		ans=ans^a[i];
	}
	return((int)ans);
}
int max(int a,int b)
{
	if(a>b)return(a);
	else return(b);
}
int min(int a,int b)
{
	if(a<b)return(a);
	else return(b);
}