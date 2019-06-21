#include<stdio.h>
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b
int a[109],n;
int H(int l,int r){
	int N=0,M=1,X;
	for(int i=l;i<=r;i++){
		N=(N+a[i])%n;
	}
	for(int i=l;i<=r;i++){
		M=(M*(a[i]%n))%n;
	}
	//printf("\n");
	int xiao=min(N,M),da=max(N,M);
	X=a[xiao];
	//printf("%d %d\n",mi,ma);
	for(int i=xiao+1;i<=da;i++){
		X=X^a[i];
	}
	return X;
}
int main()
{
	int K,l,r;
	scanf("%d%d",&n,&K);
	scanf("%d",&a[0]);
	for(int i=1;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=K;i++){
		scanf("%d%d",&l,&r);
		//H(l,r);
		printf("%d\n",H(l,r));
	}
	return 0;
	
}