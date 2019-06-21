#include<stdio.h>
long long f(long long n){
	if(n<=1){
		return 1;
	}
	return n*f(n-1);
}
int main(){
	long long m,n;
	scanf("%lld%lld",&m,&n);
	if(m<=n){
		printf("1");
		return 0;
	}
	printf("%lld",f(m)/(f(m-n)*f(n)));
	return 0;
}