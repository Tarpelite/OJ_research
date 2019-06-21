#include<stdio.h>

int prime(int n){
	int i;
	for(i=2;i*i<=n;i=i+1){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}

int main(){
	int n;
	int t;
	scanf("%d",&n);
	for(t=n+1;;t++){
		if(prime(t)==1){
			printf("%d",t);
			break;
		}
	}
	return 0;
}