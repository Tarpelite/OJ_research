#include<stdio.h>
int N(int l,int r,int A[200]);
int M(int l,int r,int A[200],int n);
int H(int l,int r,int A[200]);
int main(){
	int n,k,i,max,min,l,r;
	int A[200],a[200];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		if((N(l,r,A))%n>(M(l,r,A,n))%n){
			max=(N(l,r,A))%n;
			min=(M(l,r,A,n))%n;
		}
		else{
			max=(M(l,r,A,n))%n;
			min=(N(l,r,A))%n;
		}
		a[i]=H(min,max,A);
	}
	for(i=0;i<k;i++){
	printf("%d\n",a[i]);
	}
}
int N(int l,int r,int A[]){
	int sum=0;
	while(l<=r){
		sum=sum+A[l];
		l++;
	}
	return sum;
}
int M(int l,int r,int A[],int n){
	int ji=1;
	while(l<=r){
		ji=(ji*A[l])%n;
		l++;
	}
	return ji;
}
int H(int l,int r,int A[]){
	int m;
	m=A[l];
	while((l+1)<=r){
		m=m^A[l+1];
		l++;
	}
	return m;
}