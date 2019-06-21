#include<stdio.h>
#define max(x,y) x>y? x:y 
#define min(x,y) x<y? x:y 
int a[200];
int N(int l,int r,int n)
{int i,jg=0;
	for(i=l;i<=r;i++){
		jg=(jg+a[i])%n;
	}
	jg=jg%n;
	return jg;
}
int M(int l,int r,int n)
{int i,jg;
	jg=a[l]%n;
	for(i=l+1;i<=r;i++){
		jg=(jg*a[i])%n;}
	jg=jg%n;
	return jg;
}
int H(int l,int r)
{
	int i,jg;
	jg=a[l];
	for(i=l+1;i<=r;i++){
		jg=jg^a[i];
	}
	return jg;
}
int main()
{
	int n,i,k,l[200],r[200],jg[200];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=k-1;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<=k-1;i++){
		jg[i]=H(min(N(l[i],r[i],n),M(l[i],r[i],n)),max(N(l[i],r[i],n),M(l[i],r[i],n)));
	}
	for(i=0;i<=k-1;i++){
		printf("%d\n",jg[i]);
	}
	return 0;
 }