#include<stdio.h>
int comb(int m,int n){
	if(n==1) return m;
	if(n==m) return 1;
	if(m<n||m<1||n<1) return 0;
	return comb(m-1,n-1)+comb(m-1,n);
}
int main(){
	int n,m;scanf("%d%d",&m,&n);
	printf("%d",comb(m,n));
	return 0;
}