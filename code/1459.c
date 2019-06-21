#include<stdio.h>
int choose(int,int);
int main(){
	int m,n,a;
	scanf("%d%d",&m,&n);
	a=choose(m,n);
	printf("%d",a);
	return 0;
}
int choose(int m,int n){
	if(m<n||m<1||n<1)
	return 0;
	if(n==1)
	return m;
	if(n==m)
	return 1;
	return choose(m-1,n)+choose(m-1,n-1);
}