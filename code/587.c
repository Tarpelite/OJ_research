#include <stdio.h>
#include <stdlib.h>
int A[10000];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int N(int l,int r,int n){
	int i,m=0;
	for(i=l;i<=r;i++){
		m=m+A[i];
	}
	return m%n;
}

int M(int l,int r,int n){
	int i;
	long long m=A[l]%n;
	for(i=l+1;i<=r;i++){
		m=(m*(A[i]%n))%n;
	}
	return m%n;
}

int H(int l,int r){
	int i,m=A[l];
	for(i=l+1;i<=r;i++){
		m=m^A[i];
	}
	return m;
}

int min(int m,int n){
	if(m>n)return n;
	else 	return m;
}

int max(int m,int n){
	if(m>n)return m;
	else  return n;
}

int main() {
    int n,k,i,l,r;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
    	scanf("%d",&A[i]);
	}
    for(i=1;i<=k;i++){
    	scanf("%d %d",&l,&r);
    	if(i!=k)
    	printf("%d\n",H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n))));
    	else 
    	printf("%d",H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n))));
	}    
	return 0;
}