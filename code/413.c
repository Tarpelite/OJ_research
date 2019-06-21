#include<stdio.h>

int main(){
	int x,i,n,k,a[100000]={0};		
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		a[x]=a[x]+1;
	}
	scanf("%d",&k);
	i=1;
	int j=100000-1;
	while(i<=k){
		for(;a[j]==0;j--);
		j--;
		i++;
	}
	printf("%d %d",j+1,a[j+1]);
	return 0;
}