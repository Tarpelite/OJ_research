#include<stdio.h>
#define max(a,b)  (a>b?a:b)
#define min(a,b)  (a<b?a:b) 
int a[105];
int he(int l,int r,int n){
	int sum=0,i;
	for(i=l;i<=r;i++){
		sum=sum+a[i]%n;
	}
	return sum%n;
}
int ji(int l,int r,int n){
	int ch=1,i;
	for(i=l;i<=r;i++){
		ch=ch*a[i]%n;
	}return ch%n;
}
int huo(int l,int r){
	int h=a[l],i;
	for(i=l+1;i<=r;i++){
		h=h^a[i];
	}return h;
}
int main(){
	int n,k,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)scanf("%d",&a[i]);	
	int l,r;
	for(i=0;i<k;i++){
	scanf("%d%d",&l,&r);
	int s=huo(min(he(l,r,n),ji(l,r,n)),max(he(l,r,n),ji(l,r,n)));
	printf("%d\n",s);
	}
	
	return 0;
}