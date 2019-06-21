#include <stdio.h>
int N (int l,int r,int n);
int M (int l,int r,int n);
int H (int l,int r);
int a[100];
int k[100];
int main(){
	int i,p,q,t,n,k,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		p=N(l,r,n);
		q=M(l,r,n);
		if(p>=q){
			t=H(q,p);
		}else{
			t=H(p,q);
		}
		printf("%d\n",t);
	}
	return 0;
}
int N(int l,int r,int n){
	int i,sum=0;
	for(i=l;i<=r;i++){
		sum+=a[i];
	}
	sum%=n;
	return sum;
} 
int M(int l,int r,int n){
	int i,sum=1;
	for(i=l;i<=r;i++){
		sum*=a[i];
		if(sum>=n){
			sum%=n;
		}
	}
	sum%=n;
	return sum;
}
int H(int l,int r){
	int i,sum=a[l];
	for(i=l+1;i<=r;i++){
		sum^=a[i];
	}
	return sum;
}