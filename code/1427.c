#include<stdio.h>
int main(){
	int a[100001]={0},i=0,n,m,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);
	for(i=100000;k>0;i--){
		if(a[i]!=0)
		k--;
	}
	i=i+1;
	printf("%d %d",i,a[i]);
	return 0;
}