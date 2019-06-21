#include <stdio.h>
int main(){
	unsigned long long m,n,k=1,i;
	scanf("%llu%llu",&m,&n);
	for(i=0;i<n;i++){
		k=k*(m-i)/(i+1);
	}
	printf("%llu",k);
	return 0;
}