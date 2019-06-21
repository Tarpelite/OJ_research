#include<stdio.h>
int zhishu(int);
int main(){
	long long n;
	scanf("%lld",&n);
	n=n+1;
	while(zhishu(n)!=1){
		n++;
	}
	printf("%lld",n);
}
int zhishu(int n){
	int a=1;
	for(int b=2;b<n;b++){
		if(n%b==0) a++;
	}
	return a;
}