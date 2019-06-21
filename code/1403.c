#include<stdio.h>
int a[100000];
int b[1000];
int n;
int l,r,k;
int N (int l,int r);
int M (int l,int r);
int max (int a,int b);
int min (int a,int b);
int H (int l,int r);
int main (){

	int i=0;
	scanf("%d%d",&n,&k);
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		b[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
	}
	for(i=0;i<k;i++){
		printf("%d\n",b[i]);
	}
	return 0;
	
} 

int N (int l,int r){
	int i=0;
	int sum=0;
	for(i=l;i<=r;i++){
		sum+=a[i];
		
	}
	//	printf("%d ",sum%n);
	return sum%n;
}
int M (int l,int r){
	int i=0;
	int re=1;
	for(i=l;i<=r;i++){
		re*=a[i];
		re%=n;
	}
	//	printf("%d ",re%n);
	return re%n;	
}
int max (int a,int b){
	return (a>b?a:b);
} 
int min (int a,int b){
	return (a<b?a:b);
}
int H (int l,int r){
	int i=0;
	int re=a[l];
	for(i=l+1;i<=r;i++){
		re=re^a[i];
		
	}
	//printf("%d ",re);
	return re;
}