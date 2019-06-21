#include<stdio.h>
#include<math.h>
int a[10000];
int main(){
int n, K,l[100],r[100];
int i=0;
scanf("%d%d",&n,&K);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<K;i++){
	scanf("%d%d",&l[i],&r[i]);
}
for(i=0;i<K;i++){
	printf("%d\n",H(min(N(l[i],r[i],n),M(l[i],r[i],n)),max(N(l[i],r[i],n),M(l[i],r[i],n))));
}	
	return 0;
}

int N(int l, int r, int n){
	int re=0,i=0;
	for(i=l;i<=r;i++){
		re=re+a[i]%n;
	}
	return re%n;
}
int M(int l,int r, int n){
	int re=1,i=0;
	for(i=l;i<=r;i++){
		re=(re*a[i])%n;
	}
	return re%n;
}
int H(int l, int r, int n){
	int re=a[l],i=0;
	for(i=l+1;i<=r;i++){
		re=re^a[i];
	}
	return re;
}
int max(int a,int b){
	if(a>=b)
	    return a;
	else 
	    return b;
}
int min(int a,int b){
	if(a<=b)
	    return a;
	else 
	    return b;
}