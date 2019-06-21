#include<stdio.h>
long long fac(int n);
int main (){
	int n=0,m=0;
	scanf("%d%d",&n,&m);

	printf("%d",(fac(n)/(fac(n-m)*fac(m))));
	return 0;
}
long long fac(int n){
	if(n==1||n==0)return 1;
	else return (fac(n-1)*n);
}