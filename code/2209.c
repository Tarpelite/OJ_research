#include <stdio.h>
int n,a[10086];
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);

int main(){
	int k,l,r,i,x,y,z;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=k;i++){
		scanf("%d%d",&l,&r);
		if(N(l,r)>=M(l,r)){
			x=M(l,r);
			y=N(l,r);
		}
		else {
			y=M(l,r);
			x=N(l,r);
		}
		//printf("%d %d\n",x,y);
		z=H(x,y);
		printf("%d\n",z);
		
	}
	return 0;
}
int N(int l,int r){
	int i,h=0;
	for(i=l;i<=r;i++){
		h=h+(a[i]%n);
		h=h%n;
	}
	return h;
}
int M(int l,int r){
	int i,h=1;
	for(i=l;i<=r;i++){
		h=h*(a[i]%n);
		h=h%n;
	}
	return h;
}
int H(int l,int r){
	int i,h;
	h=a[l];
	for(i=l+1;i<=r;i++){
		h=h^a[i]; 
	}
	return h;
}