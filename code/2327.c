#include <stdio.h>

int max(int m,int n){
	if(m>=n)return m;
	else return n;}
int min(int m,int n){
	if(m>=n)return n;
	else return m;}


int main() {
	int n,K,l,r,i,j,N,M,S,L,H;
	scanf("%d%d",&n,&K);
	int a[n];
	for(i=0;i<=n-1;i++){scanf("%d",&a[i]);}
	while(~scanf("%d%d",&l,&r)){
		for(j=l,N=0;j<=r;j++){
			N+=a[j];N=N%n;
		}
		for(j=l,M=1;j<=r;j++){
			M*=a[j];M=M%n;
		}
		S=min(N,M);L=max(N,M);
		
		for(j=S,H=0;j<=L;j++){
			H=H^a[j];
		}
		printf("%d\n",H);
	}
	return 0;
}