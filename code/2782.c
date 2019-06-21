#include<stdio.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)
int N(int[],int,int,int);
int M(int[],int,int,int);
int H(int[],int,int,int);
int a[100]={0};
int main()
{
	int n,i,j,t;
	scanf("%d%d",&n,&t);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=t;j++)
	{
		long long N1,M1,H1,l,r,w,e;
		scanf("%d%d",&l,&r);
		N1=N(a,l,r,n)%n;
		M1=M(a,l,r,n)%n;
		w=min(N1,M1);
		e=max(N1,M1);
		H1=H(a,w,e,n);
		printf("%d\n",H1);
	}
	return 0;
}
int N(int va[],int l,int r,int n)
{
	int i,s=0;
	for(i=l;i<=r;i++)
	{
		s+=va[i];
	}
	return s%n;
} 
int M(int va[],int l,int r,int n)
{
	long long cheng=1,i;
	for(i=l;i<=r;i++)
	{
		cheng*=(a[i]%n);
		if(cheng>=200)
		cheng%=n;
	}
	return cheng%n;
}
int H(int va[],int l,int r,int n)
{
	int i,s=va[l];
	for(i=l;i<r;i++)
	{
		s=s^va[i+1];
	}
	return s;
}