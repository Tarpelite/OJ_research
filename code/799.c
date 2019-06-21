#include <stdio.h>
int N(int l,int r,int *a,int n){
	int i,sum=0;
	for(i=l;i<=r;++i){
		sum=sum+(*(a+i));
	}
	return sum%n;
}
int M(int l,int r,int *a,int n){
	int i,sum=1;
	for(i=l;i<=r;++i){
		sum=(sum%n)*(*(a+i)%n);
		sum=sum%n;
	}
	return sum;
}
int H(int l,int r,int n,int *a){
	int i,sum=*(a+l);
	for(i=l;i<r;++i){
		sum=sum^a[i+1];
	}

	return sum;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,a[n];
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	while(k--){
		int l,r;
		scanf("%d%d",&l,&r);
		int min,max,m;
		int c=M(l,r,a,n),d=N(l,r,a,n);
		min=(c>d)?d:c;
		max=(c<=d)?d:c;
		m=H(min,max,n,a);
		printf("%d\n",m);
	}

return 0;
}