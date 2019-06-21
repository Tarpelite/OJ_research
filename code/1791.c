#include<stdio.h>
int main(){
	long long int m,n,a=1,b=1,c=1,i;
	scanf("%lld%lld",&m,&n);
	
	
	for(i=m;i>m-n;i--){
		a=a*i;
	}
	for(i=1;i<=n;i++){
		b=b*i;
	}

	if(n>=m){
		printf("1");
	}
	else
	printf("%lld",a/b);
	return 0;
}