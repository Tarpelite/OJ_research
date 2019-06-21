#include <stdio.h>
long long C(long long a){
	long long b=1,c=1;
	if(a==0){
		return 1;
	}
	else{
	while(b<=a){
		c=c*b;
		b++;
	}
	return c;
	}
}
int main(){
	long long m,n;
	scanf("%lld%lld",&m,&n);
	printf("%lld",C(m)/(C(n)*C(m-n)));
}