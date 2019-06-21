#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
int N(int l,int r,int A[],int length,int n);
int M(int l,int r,int A[],int length,int n);
int H(int l,int r,int A[],int length);
int main(){
	int n,K,l,r,i,j=0,x,y;
	scanf("%d %d",&n,&K);
	int a[100]={},result[100]={};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	while(j<K){
		scanf("%d %d",&l,&r);
		x=N(l,r,a,n,n);
		y=M(l,r,a,n,n);
		result[j]=H(min(x,y),max(x,y),a,n);
		j++;
	}
	for(j=0;j<K;j++){
		printf("%d\n",result[j]);
	}
	return 0;
} 

int max(int a,int b){
	int t;
	if(a>=b) t=a;
	else t=b;
	return t;
}
int min(int a,int b){
	int t;
	if(a>=b) t=b;
	else t=a;
	return t;
}
int N(int l,int r,int A[],int length,int n){
	int sum1=0,p;
	for(p=l;p<=r;p++){
		sum1+=(A[p]%n);
	}
	sum1=sum1%n;
	return sum1;
}
int M(int l,int r,int A[],int length,int n){
	int sum2=1;
	int p;
	for(p=l;p<=r;p++){
		sum2=(sum2*A[p]%n)%n;
	}
	return sum2;
}
int H(int l,int r,int A[],int length){
	int sum3=A[l];
	int p;
	for(p=l+1;p<=r;p++){
		sum3^=A[p];
	}
	return sum3;
}