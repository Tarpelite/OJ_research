#include <stdio.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)
int n;
int H(int l,int r,int a[]){
	int h=a[l];
	while(l<r){
		h=h^a[l+1];
		l++;
	}
	return h;
}
int N(int l,int r,int a[]){
	int h=a[l];
	while(l<r){
		h=h+a[l+1];
		l++;
	}
	return h%n;
}
int M(int l,int r,int a[]){
	int h=a[l];
	while(l<r){
		h=(h*a[l+1])%n;
		l++;
	}
	return h%n;
}
int main(){
	int k,a[10001],l,r,aa=0,b=0;
	scanf("%d%d",&n,&k);
	while(aa<n){
		scanf("%d",&a[aa]);
		aa++;
	}
	while(b<k){
		scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r,a),M(l,r,a)),max(N(l,r,a),M(l,r,a)),a));
		b++;
	}
	return 0;
}