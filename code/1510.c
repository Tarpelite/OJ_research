#include<stdio.h>
int n,k,i,M,N,H,p,q;
int a[101]={0};
int f1(int l,int r);
int f2(int l,int r);
int h(int p,int q);
int main()
{
	int l,r,j;
	int b[101]={0};
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	{
		scanf("%d%d",&l,&r);
		N=f1(l,r);
		M=f2(l,r);
		p=(M>N)?N:M;
		q=(M>N)?M:N;
		b[j]=h(p,q);	
	}
	for(j=0;j<k;j++)
	{
		printf("%d\n",b[j]);
	}
	return 0;
}
int f1(int l,int r)
{
	N=0;
	for(i=l;i<=r;i++)
	{
		N+=a[i];
	}
	N%=n;
	return N;
}
int f2(int l,int r)
{
	M=1;
	for(i=l;i<=r;i++)
	{
		M*=a[i];
		M%=n;
	}	
	return M;
}
int h(int p,int q)
{
	H=a[p];
	for(i=p+1;i<=q;i++)
	{
		H^=a[i];
	}
	return H;
}