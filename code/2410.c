#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
int N(int x,int y);
int M(int x,int y);
int H(int x,int y);
int A[10000],n;
int main()
{
	int i,K,l[10000],r[10000],j,k;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<K;i++)
	{
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<K;i++)
	{
		j=min(N(l[i],r[i]),M(l[i],r[i]));
		k=max(N(l[i],r[i]),M(l[i],r[i]));
		printf("%d\n",H(j,k));
	}
	return 0;
}
int N(int x,int y)
{
	int i,S=0;
	for(i=x;i<=y;i++)
	{
		S=S+A[i];
	}
	S=S%n;
	return S;
}
int M(int x,int y)
{
	int i,S=1;
	for(i=x;i<=y;i++)
	{
		if(S>100) S=(S%n)%n;
		S=S*(A[i]%n);
	}
	S=S%n;
	return S;
}
int H(int x,int y)
{
	int i,S=A[x];
	for(i=x+1;i<=y;i++)
	{
		S=S^A[i];
	}
	return S;
}