#include <stdio.h>
int a[101];
int n,k;
int min(int m,int n)
{
	if(m<n)
		return m;
	else
		return n;
}
int max(int m,int n)
{
	if(m>n)
		return m;
	else
		return n;
}
int M(int l,int r)
{
	int k=1;
	for(int i=l;i<=r;i++)
	{
		k*=a[i];
		k%=n;
		}	
	return k;
}
int N(int l,int r)
{
	int k=0;
	for(int i=l;i<=r;i++)
	{
		k+=a[i];
		k%=n;
	}	
	return k;
}
int H(int l,int r)
{
	int k=a[l];
	for(int i=l+1;i<=r;i++)
		k=k^a[i];
	return k;
}
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<k;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		int m=M(l,r);
		int n=N(l,r);
		int ans=H(min(m,n),max(m,n));
		printf("%d\n",ans);
	}
	return 0;
}