#include<stdio.h>
long long cheng(long long n){
	long long jie=n,i;
	for(i=n-1;i>0;i--){
		jie=jie*i;
	}
	return jie;
}
long long xiao(long long m, long long n){
	long long i,jie=m;
	for(i=m-1;i>n;i--){
		jie=jie*i;
	}
	return jie;
}
int main(){
	long long m,n,sum;
	scanf("%lld%lld",&m,&n);
	if(m<n)	printf("0");
	
	else {
	if(m==n||n==0||m==0){
		printf("1");
	}
	else {
		sum=xiao(m,n)/cheng(m-n);
	printf("%lld",sum);
	}	}
	return 0;
}