#include<stdio.h>

int a[1000]={0};
int N(int l,int r,int n)
{	int sum=0;
	for(int i=l;i<=r;i++)
	{
		sum+=a[i];
	}
	return sum%n;
}
int M(int l,int r,int n)
{
	long long cheng=1;
	for(int i=l;i<=r;i++)
	{
		cheng*=(a[i]%n);
		if(cheng>=200)
		cheng%=n;
	}
	return cheng%n;
}
int H(int l,int r,int n)
{
	int x=a[l];
	for(int i=l+1;i<=r;i++)
	{
		x^=a[i];
	}
	return x;
}
int main()
{	
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=k;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		int n1=N(l,r,n);
		int m1=M(l,r,n);
		int a1=(n1<m1)?n1:m1;
		int a2=(n1>m1)?n1:m1;
		int ans=H(a1,a2,n);
		printf("%d\n",ans);
	}
	return 0;
}