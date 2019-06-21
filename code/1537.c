#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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