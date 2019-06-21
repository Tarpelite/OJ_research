#include<stdio.h>
int a[200];
int n;
int N1(int l,int r) {
	int N=0;
	int i;
	for(i=l; i<r+1; i++) {
		N=N+(a[i]);
		if(N>n)
			N=N%n;
	}
	N=N%n;
	return N;
}
int M1(int l,int r) {
	int M=1;
	int i;
	for(i=l; i<r+1; i++) {
		M=M*(a[i])%n;
	}
	return M%n;
}
int H1(int l,int r) {
	int H=a[l];
	int i;
	for(i=l+1; i<r+1; i++) {
		H=H^a[i];
	}
	return H;
}
int max(int x,int y) {
	int g=0;
	if(x>=y) {
		g=x;
	} else g=y;
	return g;
}
int min(int x,int y) {
	int g=0;
	if(x<=y) {
		g=x;
	} else g=y;
	return g;
}
int main() {
	int k=0;
	int M,N;
	int l=0,r=0;
	int i,t=0;
	int output1=0;
	scanf("%d%d",&n,&k);
	for(i=0; i<=n-1; i++) {
		scanf("%d",&a[i]);
	}
	t=0;
	while(t<k) {
		scanf("%d%d",&l,&r);
		N=min(N1(l,r),M1(l,r));
		M=max(N1(l,r),M1(l,r));
		output1=H1(N,M);
		printf("%d\n",output1);
		t++;
	}
	return 0;
}