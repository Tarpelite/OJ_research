#include <stdio.h>
#define max(a,b) (a>b? a:b)
#define min(a,b) (a<b? a:b)
int N(int l,int r,int A[],int n){
	int i,he=0;
	for(i=l;i<=r;i++){
		he+=A[i];
		he=he%n;
	}
	return he;
}
int M(int l,int r,int A[],int n){
	int i,ji=1;
	for(i=l;i<=r;i++){
		ji=ji*A[i];
		ji=ji%n;
	}
	return ji;
}
int H(int l,int r,int A[]){
	int i,huo;
	if(l==r){huo=A[l];}
	else{
		huo=A[l];
		for(i=l;i<r;i++){huo=huo^A[i+1];}
	}
	return huo;
}
int main()
{
	int n,K,i,b,c,d,e,f;
	scanf("%d %d\n",&n,&K);
	int a[n],l[K],r[K];
	for(i=0;i<n;i++){scanf("%d",&a[i]);}
	scanf("\n");
	for(i=0;i<K;i++){scanf("%d %d\n",&l[i],&r[i]);}
	for(i=0;i<K;i++){
		b=N(l[i],r[i],a,n);c=M(l[i],r[i],a,n);
		d=min(b,c);e=max(b,c);
		f=H(d,e,a);
		printf("%d\n",f);
	}
	return 0;
}