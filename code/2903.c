#include <stdio.h>
int x[10000004]={0},x1[20004]={110000,0};
int main(){
	int i,j,cis,k,n,n1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x[i]);
	}
	scanf("%d",&k);
	for(i=1;i<=k;i++){
		for(j=1;j<=n;j++){
			if(x[j]<x1[i-1]){
			
			if(x[j]>x1[i]){
				x1[i]=x[j];
				cis=0;
			}
			if(x[j]==x1[i]){
				cis++;
			}
			
			}
		}
	}
	printf("%d %d",x1[k],cis);
	return 0;
}