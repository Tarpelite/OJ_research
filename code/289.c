#include <stdio.h>
#include <math.h>

long long int c(int m,int n){
	long long int i=1,j;
	for(j=1;j<=m;j++){
		i*=j;	}
	for(j=1;j<=n;j++){
		i/=j;	}
	for(j=1;j<=m-n;j++){
	    i/=j;}
	return i;
}

int main() {
	int m,n;
	scanf("%d%d",&m,&n);	
	printf("%lld",c(m,n));
	return 0;
}