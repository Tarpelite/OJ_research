#include <stdio.h>;


int main(){
	int n,k,i,m;
	int a[100000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		a[m]++;
	}
	scanf("%d",&k);
	for(i=99999;i>=0;i--){
		if(a[i]>0)
		k--;
		if(k==0){
			printf("%d %d",i,a[i]);
			break;
		}
	}

	return 0;
}