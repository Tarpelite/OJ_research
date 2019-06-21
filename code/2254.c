#include<stdio.h>
int a[100002]={0};
int main(){
	int i,n,k,x,y,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[x]+=1;
	}
	scanf("%d",&k);
	for(i=100001;i>=0;i--){
		if(a[i]!=0){
			sum+=1;
		}
		if(sum==k){
			printf("%d %d",i,a[i]);
			return 0;
		}
	}
}