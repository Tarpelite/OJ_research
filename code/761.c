#include<stdio.h>
int max(int a,int b){
	int t;
	if(a>b){
		t=a;}
	else{
		t=b;
}
	return t;
}
int min(int c,int d){
	int t1;
	if(c<d){
		t1=c;}
	else{
		t1=d;
}
	return t1;
}
int N(int A[],int l,int r,int n){
	int a,i;
	int sum=0;
	for(i=l;i<=r;i++){
		sum+=A[i];
	}
	a=sum%n;
	return a;
}
int M(int A[],int l,int r,int n){
	int b,j;
	int mult=1;
	int c[r-l+1];
	for(j=l;j<=r;j++){
		c[j-l]=A[j]%n;
	}
	for(j=0;j<r-l+1;j++){
		mult=(mult*c[j])%n;
	}
	b=mult;
	return b;
}
int H(int A[],int c,int d){
	int k,s;
	s=A[c];
	for(k=c+1;k<=d;k++){
		s=s^A[k];
	}
	return s;
}
int main()
{
	int n,k,i=0;
	scanf("%d%d",&n,&k);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int B[2*k];
	for(i=0;i<2*k;i++){
		scanf("%d",&B[i]);
	}
	int a,b,c,d;
	for(i=0;i<2*k-1;i=i+2){
		a=N(A,B[i],B[i+1],n);
		b=M(A,B[i],B[i+1],n);
		c=min(a,b);
		d=max(a,b);
		printf("%d\n",H(A,c,d));
	}
	return 0;
}