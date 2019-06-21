#include<stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int a[105],n;
int h(int l,int r){
	int M=1,N=0,ans;
	for(int i=l;i<=r;++i){
		N=(N+a[i])%n;
	}
	for(int i=l;i<=r;i++){
		M=(M*(a[i]%n))%n;
	}
	//printf("\n");
	int mi=min(N,M),ma=max(M,N);
	ans=a[mi];
	//printf("%d %d\n",mi,ma);
	for(int i=mi+1;i<=ma;++i){
		ans=ans^a[i];
	}
	return ans;
}
int main(){
	int k,l,r;
	scanf("%d%d",&n,&k);
	scanf("%d",&a[0]);
	for(int i=1;i<n;++i){
		scanf("%d",&a[i]);
	}
	//printf("!!\n");
	for(int i=1;i<=k;++i){
		scanf("%d%d",&l,&r);
		//H(l,r);
		printf("%d\n",h(l,r));
	}
	return 0;
}