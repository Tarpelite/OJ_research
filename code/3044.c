#include <stdio.h>
int nmh(int l,int r,int n,int a[]){
	int i,sum=0,b;
	for(i=l;i<=r;i++){
		sum=sum+a[i];
	}
	b=sum%n;
	return(b);
}
int nmb(int l,int r,int n,int a[]){
	int i,sum=1,b;
	for(i=l;i<=r;i++){
		sum=sum*a[i];
		sum=sum%n;
	}
	return(sum);
}
int nmd(int l,int r,int a[]){
	int i,sum;
	if(l==r){
		return(a[l]);
	}
	else{sum=a[l]^a[l+1];
	 for(i=l+2;i<=r;i++){
		sum=sum^a[i];
	}
	return(sum);
}
}
int main(){
	int N,K,a[101],l[101],r[101],n[101],m[101],h[101],i;
	scanf("%d%d",&N,&K);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<K;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<K;i++){
		n[i]=nmh(l[i],r[i],N,a);
		m[i]=nmb(l[i],r[i],N,a);
	}
	for(i=0;i<K;i++){
		if(n[i]>=m[i]){
			h[i]=nmd(m[i],n[i],a);
		}
		else if(m[i]>n[i]){
			h[i]=nmd(n[i],m[i],a);
		}
	}
	for(i=0;i<K;i++){
		printf("%d\n",h[i]);
	}
}