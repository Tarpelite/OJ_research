#include<stdio.h>
int zhs(int m,int n){
	if(m==1)
	{
		return n;
	}
	if(n==1){
		return 0;
	}
	return (zhs(m-1,n-1)+zhs(m,n-1));
}
int main(){
	int m,n;
	int put;
	scanf("%d%d",&n,&m);
	put=zhs(m,n);
	printf("%d",put);
	return 0;
}