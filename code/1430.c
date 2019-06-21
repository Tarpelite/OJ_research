#include<stdio.h>
#define G_S 100001
int a[G_S]={0};
int zhaoshu(int [],int,int);
int main(){
	int n,x,m=0;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[x]++;
		m=(m>x)?m:x;
	}
	int k;
	scanf("%d", &k);
	printf("%d %d",zhaoshu(a,m,k),a[zhaoshu(a,m,k)]);
	return 0;	
}
int zhaoshu(int a[],int m,int k){
	for(;k>=1;k--){
		if(a[m]==0) k++;
		m--;
	}
	return m+1;
}