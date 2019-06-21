#include<stdio.h>
int C_mn(int,int);
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",C_mn(m,n));
	return 0;
}


int C_mn(int m,int n){
	if(m<n||m<1||n<1)
	return 0;
	if(n==1)
	return m;
	if(m==n)
	return 1;
	return C_mn(m-1,n)+C_mn(m-1,n-1);
	}