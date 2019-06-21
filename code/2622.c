#include<stdio.h>
int a[101];
int N(int l,int r,int n){
	
	if(l==r)
	return a[l]%n;
	else return (a[r]+N(l,(r-1),n))%n;
}
int min(int y,int x){
	if(y>x)
	return x;
	else return y;
}
int max(int y,int x){
	if(y>x)
	return y;
	else return x;
}
int M(int l,int r,int n){
	if(l==r)
	return a[l]%n;
	else return ((a[r]%n)*M(l,(r-1),n))%n;
}
int H(int l,int r){
	if(l==r)
	return a[l];
	else return (a[r]^H(l,(r-1)));
}
int main()
{
	int n,k,i,l,r,p;

	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=k;i++)
	{scanf("%d%d",&l,&r);
	p=H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n)));
	
	printf("%d\n",p);
	}
	
	
	return 0;
	
}