#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int comb_num(int m,int n){
	if(m<n||m<1||n<1)
	return 0;
	if(n==1)
	return m;
	if(n==m)
	return 1;
	return comb_num(m-1,n)+comb_num(m-1,n-1);
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a=comb_num(m,n);
	printf("%d",a);
	return 0;
}