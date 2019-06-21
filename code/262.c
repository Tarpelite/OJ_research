#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int fun(int x){
	int i,sum=1;
	for(i=1;i<=x;i++){
		sum*=i;
	}
	return sum;
}
int k(int x,int y){
	int i,sum=1;
	for(i=x-y+1;i<=x;i++){
		sum*=i;
	}//计算x-y到x的累乘 
	return sum;
}
int main(){
	int m,n,ci;
	scanf("%d%d",&m,&n);
	ci=k(m,n)/fun(n);
	printf("%d",ci);
	return 0;
 }