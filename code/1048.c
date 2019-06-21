#include<stdio.h>
int A[10000]={0},n;
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
#define max(a,b) (a)>=(b)?(a):(b)
#define min(a,b) (a)<=(b)?(a):(b)
int main(){
	int K,l,r,x,i;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<K;i++){
		scanf("%d%d",&l,&r);
		x = H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
		printf("%d\n",x);
	}
} 
int N(int l,int r){
	int x = 0,i;
	for(i=l;i<=r;i++){
		x = x + (A[i]%n);
		x = x%n;
		}
		return x;
}
int M(int l,int r){
	int x = 1,i;
	for(i=l;i<=r;i++){
		x = x*(A[i]%n);
		x = x%n;	}
		return x;
}
int H(int l,int r){
	int x = A[l],i;
	for(i=l+1;i<=r;i++)
	x = x^A[i];
	return x;	
}