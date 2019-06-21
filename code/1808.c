#include<stdio.h> 
#include<stdlib.h>
int a[100005];
int cmp(const void *a,const void *b){
	return (int *)a-(int *)b;
}
int main(){
	int n,k,m,i;
	scanf("%d",&n);
	for( i=0;i<n;i++){
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);
	i=100000;
	while(k!=0){
		if(a[i]!=0) k--;
		if(k==0) break;
		i--;
	}
	printf("%d %d",i,a[i]);
	return 0;
}