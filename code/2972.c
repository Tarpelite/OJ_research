#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
int main(){
	int n,K,a[10000],i,j,k,l,r;
	int N[101]={0},M[101]={1},H[101];
	scanf("%d%d",&n,&K);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=K;i++){
		scanf("%d%d",&l,&r);
		M[i]=1;
		for(j=l;j<=r;j++){
			N[i]=(N[i]+a[j])%n;
			M[i]=(a[j]*M[i])%n;
		}
		H[i]=a[min(N[i],M[i])];
		if(N[i]==M[i])
			continue;
		else
			for(j=min(N[i],M[i])+1;j<=max(N[i],M[i]);j++){
				H[i]^=a[j];	
			}
	}
	for(i=1;i<=K;i++){
		printf("%d\n",H[i]);
	} 
	return 0;
}
int max(int a,int b){
	return a>b?a:b;
}
int min(int a,int b){
	return a<b?a:b;
}