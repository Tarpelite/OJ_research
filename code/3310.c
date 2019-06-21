#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int a[100];
int n;
int min(int a,int b){
	if(a>b) return b;
	return a;
}
int max(int a,int b){
    if(a>b) return a;
    return b;
}
int N(int l,int r){
	int i;
	int res=0;
	for(i=l;i<=r;i++){
		res+=a[i];
	}
	return res%n;
}
int M(int l,int r){
	int i;
	int res=1;
	for(i=l;i<=r;i++){
		res*=a[i];
		if(res>n) res%=n;
	}
	return res%n;
}
int H(int l,int r){
	int i;
	int res=a[l];
	for(i=l+1;i<=r;i++){
		res^=a[i];
	}
	return res;
}
int ca(){
	int l,r;
	long long t1,t2,t3;
	int i;
	scanf("%d%d",&l,&r);
	printf("%d\n",(H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)))));
	return 0;
}
int main(){
	int k;
	int i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++){
		ca();
	}
	return 0;
}