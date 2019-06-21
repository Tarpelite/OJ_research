#include<stdio.h>
int main(){
	int n,i=0,s=0,num[100000]={0},k=0,m=0,max=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		num[m-1]+=1; 
	    if(max<=m){
	    	max=m;
		}
	}
	scanf("%d",&k);
	for(i=0;i<max;i++){
		if(num[i]!=0){
			s+=1; 
		}
	}
	for(i=0;i<max;i++){
			if(num[i]!=0){
			d+=1; 
		}
		if(d==s-k+1){
			printf("%d %d",i+1,num[i]);
		}
	}
	return 0;
}