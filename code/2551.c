#include<stdio.h>
int f(int,int);
int main()
{
	int m,n,p;
	scanf("%d%d",&m,&n);
	p=f(m,n);
	printf("%d",p);
	return 0;
}
int f(int m,int n){
	if(m<n||n<1||m<1){
		return 0;
	}
	if(n==1){
		return m;
	}
	if(n==m){
		return 1;
	}
	return f(m-1,n)+f(m-1,n-1);
}