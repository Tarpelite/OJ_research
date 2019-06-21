#include<stdio.h>

int a[100],n;

int max(int a,int b)
{
	return a>b? a:b;
}
int min(int a,int b)
{
	return a<b? a:b;
}
int N(int l,int r)
{
	int i,sum=0;
	
	for(i=l;i<=r;i++){
		
		sum = (sum+a[i])%n;
	}
	return sum;
}
int M(int l,int r)
{
	int i,pi=1;
	
	for(i=l;i<=r;i++){
		
		pi = pi*(a[i]%n)%n;
	}
	return pi;
}
int H(int l,int r)
{
	int i,yh=a[l];
	
	for(i=l+1;i<=r;i++){
		
		yh ^= a[i];
	}
	return yh;
}

int main()
{
	int K,l[100],r[100],i,ans;
	
	scanf("%d%d",&n,&K);
	
	for(i=0;i<n;i++)
	
		scanf("%d",&a[i]);
		
	for(i=0;i<K;i++)
	
		scanf("%d%d",&l[i],&r[i]);
		
	for(i=0;i<K;i++){
		
		ans = H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i])));
		
		printf("%d\n",ans);
	}
	return 0;
}