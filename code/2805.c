#include<stdio.h>
int max(int x,int y)
{
	return x > y ? x : y;
}
int min(int x,int y)
{
	return x < y ? x : y;
}
int main()
{
	int n,K,a[10000],i,b,c,N,M,H,s,l,p,m,z;
	scanf("%d%d",&n,&K);
	i=0;
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	while(K>0)
	{
		s=0;
		l=1;
		scanf("%d%d",&b,&c);
		while(b<=c)
		{
			s=s+a[b];
			l=l*a[b]%n;
			b++;
		}
		N=s%n;
		M=l;
		p=min(N,M);
		m=max(N,M);
		z=a[p];
		p=p+1;
		while(p<=m)
		{
			z=z^a[p];
			p++;
		}
		printf("%d\n",z);
		K--;
	}
	return 0;
 }