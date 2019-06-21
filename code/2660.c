#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
int main()
{
	int n,k,i,j;
	int l,r,M,H;
	unsigned long long N;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=1;j<=k;j++)
	{
		scanf("%d%d",&l,&r);
		for(i=l,M=0,N=1;i<=r;i++)
		{
			M=M+a[i];
			N=(N*a[i])%n;
		}
		M%=n;
	
		for(i=min(M,N)+1,H=a[min(M,N)];i<=max(M,N);i++)
			H=H^a[i];
		printf("%d\n",H);
		
	}
	return 0;
}
	int max(int a,int b)
	{
		if(a>=b)
			return a;
		else
			return b;
	}
	int min(int a,int b)
	{
		if(a<=b)
			return a;
		else
			return b;
	}