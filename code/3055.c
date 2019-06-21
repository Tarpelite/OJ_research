#include<stdio.h>

int f(int n){
	int a;
	for(int i=2;i<n-1;i++){
		a=n%i;
		if(a==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n+1;i<100000+5;i++){
		if(f(i)){
			printf("%d",i);
			return 0;
		}
	}
}