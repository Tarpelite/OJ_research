#include<stdio.h>

int a[105];

int N(int l,int r,int n){
	int s=0;
	for(int i=l;i<=r;i++)
	s=s+a[i];
	return s%n;
}

int M(int l,int r,int n){
	int s=1;
	for(int i=l;i<=r;i++)
	s=s*a[i]%n;
	return s;
}

int H(int l,int r,int n){
	int s=a[l];
	for(int i=l+1;i<=r;i++)
	s=s^a[i];
	return s;
}

int min(int a,int b){
	int e=(a<b?a:b);
	return e;
}

int max(int a,int b){
	int e=(a>b?a:b);
	return e;
}
int N(int,int,int);
int M(int,int,int);
int H(int,int,int);
int min(int,int);
int max(int,int);
int main(){
	int n,K;
	int l[105],r[105];
	scanf("%d%d",&n,&K);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<K;i++) scanf("%d%d",&l[i],&r[i]);
	for(int i=0;i<K;i++){
		int score=H(min(N(l[i],r[i],n),M(l[i],r[i],n)),max(N(l[i],r[i],n),M(l[i],r[i],n)),n);
		printf("%d\n",score);
	}
	return 0;
}