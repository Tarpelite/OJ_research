#include<stdio.h>

int N(int a[],int l,int r){
	int n=0;
	for(int i=l;i<=r;i++)n+=a[i];
	return n;
}

int M(int a[],int l,int r,int n){
	int m=1;
	for(int i=l;i<=r;i++)m=(m*a[i])%n;
	return m;
}

int min(int n,int m){
	if(n>m)return m;
	else return n;
}

int max(int n,int m){
	if(n>m)return n;
	else return m;
}

int H(int a[],int l,int r){
	int h=a[l];
	for(int i=l+1;i<=r;i++)h^=a[i];
	return h;
}

int main(){
	int b,c,d,m,h,n,K,a[10000+5],l[100],r[100];
	scanf("%d%d",&n,&K);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<K;i++){
		scanf("%d%d",&l[i],&r[i]);
		b=N(a,l[i],r[i])%n;
		m=M(a,l[i],r[i],n);
		c=min(b,m);
		d=max(b,m);
		h=H(a,c,d);
		printf("%d\n",h);
	}
	return 0;	
}