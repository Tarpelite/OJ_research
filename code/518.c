#include<stdio.h>
#include<stdlib.h>
double A(double n){
	double m=1,i;
	for(i=1;i<=n;i++){
		m=m*i;
	}
	return m;
}
int main(){
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
	printf("%.0f",A(m)/(A(n)*A(m-n)));
	return 0;
}