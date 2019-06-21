#include<stdio.h>
long long f(long long);
int main(){
	long long ans,m,n;
	scanf("%lld%lld",&m,&n);
	if(m<=0||n<=0){
		printf("0");return 0;
	}
	if(n>=m){
		printf("%lld",1);return 0;
	}
	ans=f(m)/f(n)/f(m-n);
	printf("%lld",ans);
	return 0;
}
long long f(long long a){
	if(a==1)return 1;
	else return a*f(a-1);
}