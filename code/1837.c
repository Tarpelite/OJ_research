#include<stdio.h>
int main(){
	int a[100005]={0};
	int n,i,x,max=0;scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x>max) max=x;
		a[x]=a[x]+1;
	}
	int k,count=0;scanf("%d",&k);
	for(i=max;i>=0;i--){
		if(a[i]==0) continue;
		count++;//记录非零数 
		if(count==k) break;		
	}
	printf("%d %d",i,a[i]);
	return 0;
	
}