#include<stdio.h>
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int min(int a,int b)
{
	return a<b?a:b;
}
int main(void)
{
	int n,K,a[1000],l,r,M,N,h,mid;
	int i,k;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(k=0;k<K;k++)
	{
		N=0,M=1;
		scanf("%d%d",&l,&r);
		for(i=l;i<=r;i++)
		{
			N=(N+a[i])%n;
			M=(M*a[i])%n;
			//printf("%d %d\n",N,M);
		}
		//printf("%d %d\n",N,M);
		mid=N;
		N=min(M,N);
		M=max(M,mid);
		//printf("%d %d\n",N,M);
		h=a[N];
		//printf("%d\n",h);
		for(i=N;i<M;i++) h=h^a[i+1];
		printf("%d\n",h);
	}
	return 0;
}