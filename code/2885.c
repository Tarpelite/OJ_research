#include<stdio.h>
#include<math.h>
int N(int l,int r,int n,int A[]);
int M(int l,int r,int n,int A[]);
int H(int l,int r,int n,int A[]);
int main(){
	int n,K,A[10000],l[100],r[100],j=0;
	int n1,m,h,t;
	scanf("%d%d",&n,&K);
	while(j<n){
		scanf("%d",&A[j]);
		j++;//
	}
	j=0;
	while(j<K){
		scanf("%d%d",&l[j],&r[j]);
		j++;
	}
	for(j=0;j<K;j++){
		n1=N(l[j],r[j],n,A);
		m=M(l[j],r[j],n,A);
		if(m>n1){
			t=n1;
			n1=m;
			m=t;
		}
		h=H(m,n1,n,A);
		printf("%d\n",h);
	}
}
int N(int l,int r,int n,int A[]){
	int m=0;
	for(int i=l;i<=r;i++){
		m=m+A[i]%n;
	}
	return m%n;
}
int M(int l,int r,int n,int A[]){
	int m=1;
	for(int i=l;i<=r;i++){
		m=m*(A[i]%n)%n;
	}
	return m%n;
}
int H(int l,int r,int n,int A[]){
	int m=A[l];
	for(int i=l+1;i<=r;i++){
		m=m^A[i];
	}
	return m;
}