#include<stdio.h>
int i,a[105],n; 
int N(int l,int r) ;
int M(int l,int r) ;
int H(int l,int r) ;
int min(int N,int M);
int max(int N,int M);
int main()
{
	int r,l,k,q,w,e,t,p,b[105],j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	{
		scanf("%d%d",&l,&r);
		q=N(l,r);
		w=M(l,r);
		t=min(q,w);
		p=max(q,w);
		e=H(t,p);
		b[j]=e;
	}
	for(i=0;i<k;i++)
{
	printf("%d\n",b[i]);
}
	return 0;	
}

	int N(int l,int r) 
	{	int ans=0,i=l;
		if(r==i)
		{
			return a[i]%n;
		}
		return (a[i]%n+N(++i,r))%n;
	}
	int M(int l,int r) 
	{
		int ans=1,i=l;
		if(r==i)
		{
			return a[i]%n;
		}
		return (a[i]%n*M(++i,r))%n;
	}
	int H(int l,int r) 
	{
		int ans=a[l];
		if(r==l)
		{
			return ans;
		}
		for(i=l+1;i<=r;i++)
		{
			ans=ans^a[i];
		}
		return ans;
	}
	int min(int N,int M)
	{
		int ans=N;
		if(ans>M)
		ans=M;
		return ans;
	}
	int max(int N,int M)
	{
		int ans=N;
		if(ans<M)
		ans=M;
		return ans;
	}