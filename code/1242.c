#include<stdio.h>
#define max(a,b)a>b?a:b
#define min(a,b)a<b?a:b
int n,k,l,r,i,a[10000];
long long N,M,H;
long long NN(int l,int r,int n,int a[])
{
	long long i,m=0;
	for (i=l;i<=r;i++)
	{
		m+=a[i]%n;
	}
	m%=n;
	return m;
}
long long MM(int l,int r,int n,int a[])
{
	long long i,m=1,ans=1;
	for (i=l;i<=r;i++)
	{
		m*=a[i];
		m%=n;
	}
	m%=n;
	return m;
}


long long HH(int l,int r,int a[])
{
	long long i,m=0;
	for (i=l;i<=r;i++)
	{
		m=m^a[i];
	}
	return m;
}
int main()
{
	scanf("%d",&n);
    scanf("%d",&k);
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<k;i++)
    {
    	scanf("%d%d",&l,&r);
    	N=NN(l,r,n,a);
    	M=MM(l,r,n,a);
    	long long l1=min(N,M);
    	long long l2=max(N,M);
    	H=HH(l1,l2,a);
    	printf("%lld\n",H);
	}
	return 0;
}