#include <stdio.h>
#include <stdlib.h>
int comb(int m,int n);
int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",comb(m,n));
	return 0;
}
int comb(int m,int n){
    if(n==1)
	return m;
	else if(m==n||n==0)
	return 1;
	return comb(m-1,n)+comb(m-1,n-1);
}