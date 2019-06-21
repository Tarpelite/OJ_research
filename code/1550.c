#include<stdio.h>
int N(int a[],int l,int r,int n);
int M(int a[],int l,int r,int n);
int H(int a[],int l,int r);
int main(){
	int a[100],k,i,n,l,r,b[100];
	int min,max,guodu;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		min=N(a,l,r,n);
		max=M(a,l,r,n);
		if(min>max)  guodu=max,max=min,min=guodu;
		b[i]=H(a,min,max);
	}
	for(i=0;i<k;i++) printf("%d\n",b[i]);
	return 0;
} 
int N(int a[],int l,int r,int n){
	long long sum=0;
	for(;l<=r;l++) sum+=a[l];
	return sum%n;
}
int M(int a[],int l,int r,int n){
	long long liancheng=1,b;
	for(;l<=r;l++) {
	liancheng*=a[l];
	b=liancheng%=n;}
	return b;
}
int H(int a[],int l,int r){
	int yihuo=0;
	for(;l<=r;l++) yihuo^=a[l];
	return yihuo;
}