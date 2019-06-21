#include<stdio.h>
#include<math.h>
int A[105];
int n;
int N(int l,int r){
	int i,p=0;
	for(i=l;i<=r;i++){
		p+=(A[i]%n),
		p%=n;
	}
	return p;
}
int M(int l,int r){
	int i,s=1;
	for(i=l;i<=r;i++){
		s*=(A[i]%n),
		s%=n;	 
	}
	return s;
}
int min(int a,int b){
	return a<b?a:b;
}
int max(int a,int b){
	return a>b?a:b;
}
int H(int l,int r){
	int i,q=0;
	for(i=l;i<=r;i++){
		q^=A[i]; 
	}
	return q;
}



int main(){
	int i,k,l,r;
	int mi,ma;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	while((k--)!=0){
		scanf("%d%d",&l,&r);
		mi=min(N(l,r),M(l,r));
		ma=max(N(l,r),M(l,r));
		printf("%d\n",H(mi,ma));
	}
	return 0;
	
}