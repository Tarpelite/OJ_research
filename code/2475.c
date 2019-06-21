#include <stdio.h>
int main(){
	int m,n,i;
	long long sum=1;
	scanf("%d%d",&n,&m);
	for(i=n;i>=n-m+1;i--){
		sum=sum*i;
	}
	for(i=1;i<=m;i++){
		sum=sum/i;
	}
	printf("%lld",sum);
	return 0;
}