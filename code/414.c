#include <stdio.h>
int Niu(int a[],int n,int l,int r);
int Mou(int a[],int n,int l,int r);
int Hug(int a[],int n,int l,int r);
int main()
{
	int n,K;
	scanf("%d%d",&n,&K);
	int a[10010],i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int l[105],r[105];
	for(i=1;i<=K;i++)
		scanf("%d%d",&l[i],&r[i]);//start
	
	for(i=1;i<=K;i++)
	{
		int N,M,H,max,min;
		N=Niu(a,n,l[i],r[i]);
		M=Mou(a,n,l[i],r[i]);
		if(N>M)
		{
			max=N;
			min=M;
		}
		else
		{
			max=M;
			min=N;
		}
		printf("%d\n",Hug(a,n,min,max));
	}
			
	return 0;
}
int Niu(int a[],int n,int l,int r)
{
	int b=0,i;
	for(i=l;i<=r;i++)
		b+=a[i];
	return b%n;
}

int Mou(int a[],int n,int l,int r)
{
	int b=1,i;
	for(i=l;i<=r;i++)
	{
		b*=a[i];	
		b%=n;
	}
	return b;
}
int Hug(int a[],int n,int l,int r)
{
	int b=a[l],i;
	for(i=l+1;i<=r;i++)
		b^=a[i];
	return b;
}