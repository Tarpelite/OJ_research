#include<stdio.h>
int n,k,l,r;
int a[2333];
int max(int m,int n){
	return n>m?n:m;
}
int min(int m,int n){
	return n>m?m:n;
}
int N(){
	int sum=0;
	for(int i=l;i<=r;i++){
		sum+=a[i];
		sum%=n;
	}
	return sum;
}
int M(){
	int sum=1;
	for(int i=l;i<=r;i++){
		sum*=a[i];
		sum%=n;
	}
	return sum;
}
int H(){
	int sum=0;
	for(int i=l;i<=r;i++){
		sum^=a[i];
	}
	return sum;
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=k;i++){
		scanf("%d%d",&l,&r);
		int gn=N();
		int gm=M();
		l=min(gn,gm);
		r=max(gn,gm);
		printf("%d\n",H());
	}
	return 0;
}