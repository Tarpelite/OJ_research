#include<stdio.h>
int gcd(int);
int main(){
	int n;
	scanf("%d",&n);
	for(n=n+1;n<=2000000;n++){
		if(gcd(n)==1){
			printf("%d",n);
			break;
		}
	}
	return 0;
}
int gcd(int x){
	int i;
	for(i=x-1;i>=1;i--){
		if(x%i==0)
		break;
	}
	return i;
}