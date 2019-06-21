#include<stdio.h>
#include<stdlib.h>
int a[110];
int n,K;

int min(int x,int y){
	return x>y?y:x;
}

int max(int x,int y){
	return x<y?y:x;
}

int N(int x,int y){
	int ans=0;
	for(int i=x;i<=y;i++) {
		ans+=a[i];
		ans%=n;
    }
	return ans;
}

int M(int x,int y){
	int ans=1;
	for(int i=x;i<=y;i++) {
		ans*=a[i];
		ans%=n;
	}
	return ans;
}

int H(int x,int y){
	int ans=a[x];
	for(int i=x+1;i<=y;i++) ans=ans^a[i];
	return ans;
}
int main(){
	scanf("%d %d",&n,&K);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	while(K--){
		int l,r;
		scanf("%d %d",&l,&r);
		int mi=min(N(l,r),M(l,r));
		int ma=max(N(l,r),M(l,r));
		printf("%d\n",H(mi,ma)); 
	}
	return 0; 
}