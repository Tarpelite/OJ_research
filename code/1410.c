#include<stdio.h>
int sum(int,int);
int mul(int,int);
int xo(int,int);
int min(int,int);
int max(int,int);
int n,a[100]={0};
int main(){
	int i,k,m,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=k;i++){
		scanf("%d%d",&l,&r);
		m=xo(min(sum(l,r),mul(l,r)),max(sum(l,r),mul(l,r)));
		printf("%d\n",m);
	}
	return 0;
}
int sum(int l,int r){
	int i,b,sum1=0;
	for(i=l;i<=r;i++){
		sum1=sum1+a[i];
	}
	sum1=sum1%n;
	return sum1;
}
int mul(int l,int r){
	int i,b,mul2=1;
	for(i=l;i<=r;i++){
		mul2=mul2*(a[i]%n);
		mul2=mul2%n;
	}
	return mul2;
}
int xo(int l,int r){
	int i,b,xor1=0;
	for(i=l;i<=r;i++)
	xor1=xor1^a[i];
	return xor1;
}
int min(int a,int b){
	if(a<b)
	return a;
	else
	return b;
}
int max(int a,int b){
	if(a>b)
	return a;
	else
	return b;
}