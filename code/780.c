#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a
int A[10005];
int n,k,l,r;
int isn(int a,int b) {
	int c=0,i;
	for (i=a; i<=b; i++) {
		c=(c+A[i]) % n;
	}
	return c;
}
int ism(int a, int b) {
	int c=1,i;
	for(i=a; i<=b; i++) {
		c=(c*A[i]) % n;
	}
	return c;
}
int ish(int a,int b) {
	int c=0,i;
	for(i=a; i<=b; i++) {
		c^=A[i] ;
	}
	return c;
}
int main () {
	int i,v,l,r,j;
	scanf("%d%d",&n,&k);
	for (i=0; i<n; i++) {
		scanf("%d",&A[i]);
	}
	for (i=0; i<k; i++) {
		scanf("%d%d",&l,&r);
		v=ish(min(isn(l,r),ism(l,r)),max(isn(l,r),ism(l,r)));
		printf("%d\n",v);
	}

	return 0;
}