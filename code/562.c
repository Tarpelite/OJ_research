#include<stdio.h>
int N(int a[],int n,int l,int r);
int M(int a[],int n,int l,int r);
int H(int a[],int l,int r);
int max(int a,int b);
int min(int a,int b);
int main(){
	int n,K,a[102],l[102],r[102],i,c,t;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<K;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<K;i++){
		c=min(N(a,n,l[i],r[i]),M(a,n,l[i],r[i]));
        t=max(N(a,n,l[i],r[i]),M(a,n,l[i],r[i]));
        if(i==K-1){
        	printf("%d",H(a,c,t));
		}
		else
		printf("%d\n",H(a,c,t));
	}
	return 0;
}
int N(int a[],int n,int l,int r){
	int sum=0;
	for(int i=l;i<=r;i++){
		sum+=a[i];
	}
	return sum%n;
}
int M(int a[],int n,int l,int r){
	int sum=1;
	for(int i=l;i<=r;i++){
		sum=(sum*(a[i]%n))%n;
	}
	return sum%n;
}
int H(int a[],int l,int r){
	int sum;
	if(l==r){
		return a[l];
	}
	else{
		sum=a[l]^a[l+1];
	for(int i=l+2;i<=r;i++){
		sum=sum^a[i];
	}
	return sum;
	}
}
int max(int a,int b){
	int tmp=a;
	if(tmp<b){
		return b;
	}else{
		return tmp;
	}
}
int min(int a,int b){
	int tmp=a;
	if(tmp>b){
		return b;
	}
	else{
	return tmp;}
}