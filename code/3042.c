#include<stdio.h>
int N(int,int,int[],int);
int M(int,int,int[],int);
int H(int,int,int[],int);
int min(int,int);
int max(int,int);
int main()
{
	int n,K,j=0,i=0,a[101],l[101],r[101];
	scanf("%d%d\n",&n,&K);
	for(;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(;j<K;j++){
		scanf("%d%d",&l[j],&r[j]);
	}
	for(j=0;j<K;j++){
		printf("%d\n",H(min(N(l[j],r[j],a,n),M(l[j],r[j],a,n)),max(N(l[j],r[j],a,n),M(l[j],r[j],a,n)),a,n));
	}
	return 0;
}
int N(int l,int r,int a[],int n){
	int toltal=0,c;
	for(;l<=r;l++){
		toltal=(a[l]+toltal)%n;
	}
	return toltal;
}
int M(int l,int r,int a[],int n){
	int toltal=1,c;
	for(;l<=r;l++){
		toltal=(a[l]*toltal)%n;
	}
	return toltal;
}
int H(int l,int r,int a[],int n){
	int toltal=a[l],c;
	for(;l<=(r-1);l++){
		toltal=a[l+1]^toltal;
	}
	return toltal;
}
int min(int a,int b){
	if(a>b)
	return b;
	else return a;
}
int max(int a,int b){
	if(a>b)
	return a;
	else return b;
}