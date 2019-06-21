#include<stdio.h>
long long int jc(long long int a){
	if(a==0)
	return 1;
	else
	return a*jc(a-1);
}
int main(){
	long long int m,n;
	scanf("%lld %lld",&n,&m);
	printf("%lld",jc(n)/(jc(m)*jc(n-m)));
	return 0;
}