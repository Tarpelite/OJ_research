#include <stdio.h>
#include <stdlib.h>
int a[10050];
int N(int l,int r,int n);
int M(int l,int r,int n);
int H(int l,int r);
int min(int l,int r);
int max(int l,int r);
int main() {
	int n,k,i,l[101],r[101],t,m1,m2;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	for(i=0;i<k;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<k;i++){
		m1=min(N(l[i],r[i],n),M(l[i],r[i],n));
		m2=max(N(l[i],r[i],n),M(l[i],r[i],n));
		t=H(m1,m2);
		printf("%d\n",t);
	}

	return 0;
}
int N(int l,int r,int n){
	int i,sum=0;
	for(i=l;i<=r;i++){
		sum+=a[i];
	} 
	return sum%n;
}
int M(int l,int r,int n){
	int i,con=1,t;
	for(i=l;i<=r;i++){
		t=a[i]%n;
		con=t*con%n;
	} 
	return con%n;
}
int H(int l,int r){
	int i,sel;
	sel=a[l];
	for(i=l;i<=r;i++){
		sel^=a[i];
	}
	sel=sel^a[l];
	return sel;
}
int max(int l,int r){
	int max1;
   max1=(l>r)?l:r;
	return max1;
}
int min(int l,int r){
	int min1;
    min1=(l<r)?l:r;
	return min1;
}