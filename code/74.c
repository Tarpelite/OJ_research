#include<stdio.h>
long long f(int n);
int main(){
	int m,n,i;
	long long k=1;
	scanf("%d%d",&m,&n);
	for(i=m;i>=m-n+1;i--){
		k*=i;	
	}
	printf("%lld",k/f(n));
	return 0;
}
long long f(int n){
	if(n==1)
		return 1;
	else
		return f(n-1)*n;
}