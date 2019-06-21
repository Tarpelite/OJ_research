#include <stdio.h>
int jiechen(int a,int b){
	int i,m=1;
	for(i=a;i<=b;++i){
		m*=i;
	}
	return m;
}

int main(){
	int m,n,sum;
	scanf("%d%d",&m,&n);
	sum=jiechen(m-n+1,m)/jiechen(1,n);
	printf("%d",sum);
return 0;
}