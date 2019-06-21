#include <stdio.h>
long long peng(long long x){
	long long i=1;
	long long ret=1;
	for(i=1;i<=x;i++){
		ret*=i;
	}
	return ret;
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%lld",peng(m)/(peng(n)*peng(m-n)));
	return 0;
}