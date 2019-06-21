#include<stdio.h>
int min(int ,int);
int max(int ,int);
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[100];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	

		int l,r;
		
		while(k&&(scanf("%d%d",&l,&r)==2))
		{
		int N=0,M=1,H=0;
		for(int j=l;j<=r;j++)
		{
			N+=a[j];
			M*=(a[j]%n);
			M%=n;
		}
		N%=n;
		for(int j=min(N,M);j<=max(N,M);j++)
		H=H^a[j];
		printf("%d\n",H);
		k-=1;
		}
	
	
} 

int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}