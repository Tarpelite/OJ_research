#include<stdio.h>
int comb(int a){
	if(!(a&1)) return 0;
	for(int i=3;i*i<=a;i+=2){
		if(!(a%i)) return 0;
	}
	return 1;
}
int main(){
	int n;scanf("%d",&n);
	while(1){
		n++;
		if(comb(n)){
			printf("%d",n);
			return 0;
		}
	}
	return 0;
}