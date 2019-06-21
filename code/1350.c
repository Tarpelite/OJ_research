#include<stdio.h>

int main(){
	int n,t;
	scanf("%d",&n);
    for(n+=1;n<=100030;n++){
    	t=isprimer(n);
    	if(t==1) break;
	}
	printf("%d\n",n);
	return 0;
} 

int isprimer(int x){
	int ret=1;
	int i;
	if(x==1) ret=0;
	for(i=2;i<x;i++){
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}