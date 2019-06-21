#include<stdio.h>

int z(long long x){
	int i=2;
	while(x%i!=0){
		i++;
	}
	if(i<x) return 0; // bushi zhishu
	else return 1; // shi zhishu	
}

int z(long long);
int main(){
	long long n;
	scanf("%lld",&n);
	long long m=n+1;
	while(z(m)==0){
		m++;
	}
	printf("%lld",m);
	return 0;
}