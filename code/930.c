#include <stdio.h>

long long jc(int i){
	if(i==0) return 1; 
	
	return i*jc(i-1);
	
}

int main(){
	long long m,n,sum;
	scanf("%lld %lld",&m,&n);
	sum=jc(m)/(jc(n)*jc(m-n));
	printf("%lld",sum);
	return 0;

}