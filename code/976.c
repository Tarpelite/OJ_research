#include <stdio.h>
int max(int x,int y);
int min(int x,int y);
int N(int x,int y);
int M(int x,int y);
int H(int x,int y);

int n,k,l,r,s,d,a[10000]={0};

int max(int x,int y){
	return x>y?x:y;
}
int min(int x,int y){
	return x<y?x:y;
}
int N(int x,int y){
	int sum=0,k;
	for(k=x;k<=y;k++)              //全局变量可以用。 正常使用。 
	sum=(sum+a[k])%n;
	return sum;
}
int M(int x,int y){
	int cj=1;
	for(int k=x;k<=y;k++)
	cj=(cj*a[k])%n;                      //这个算法很奇怪。 
	return cj;
}
int H(int x,int y){
	int yh=a[x];
	for(int k=x;k<y;k++)
	yh=yh^a[k+1];
	return yh;
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int j=0;j<k;j++){
		scanf("%d%d",&l,&r);
		s=min(N(l,r),M(l,r)),d=max(N(l,r),M(l,r));
		printf("%d\n",H(s,d));
	}
	return 0; 
}