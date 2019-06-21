#include<stdio.h>
#include<math.h>

#define N_VAL 10000+5
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)

int a[N_VAL],n;

int N(int l,int r){
	int ret=0;
	for(int i=l;i<=r;i++)
		ret=(ret+a[i])%n;
	return ret;
}

int M(int l,int r){
	int ret=1;
	for(int i=l;i<=r;i++)
		ret=(ret*a[i])%n;
	return ret;
}

int H(int l,int r){
	int ret=0;
	for(int i=l;i<=r;i++)
		ret=ret^a[i];
	return ret;
}

int main(){
	int q; scanf("%d%d",&n,&q);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(q--){
		int l,r; scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
	}

	return 0;
}