#include <stdio.h>
int main(){
	long long m,n,k=1,i;
	scanf("%lld%lld",&m,&n);
	for(i=0;i<n;i++){
		k=k*(m-i)/(i+1);
	}
	printf("%lld",k);
	return 0;
}