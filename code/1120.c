#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double C(double n){
	double m=1,i;
	for(i=1;i<=n;i++){
		m=m*i;
	}
	return m;
}

int main() {
	double n,m;
	scanf("%lf %lf",&m,&n);
	
	if(m==0){
	printf("0");
	return 0;
}
    if(n==0){
    printf("0");
	return 0;	
	}
	
	if(n>=m){
	printf("1");
	return 0;		
	}
	
	printf("%.0f",C(m)/(C(n)*C(m-n)));
	return 0;
}