#include<stdio.h>
int N(int ,int ,int ,long long []);
int M(int ,int,int,long long []);
int main()
{
	int n,K,l,r;
	long long a[100+5],H[100+5];
	scanf("%d%d",&n,&K);
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
	for(int i=0;i<K;i++){
		scanf("%d %d",&l,&r);
		int e,b;
		int c=N(n,l,r,a);
		int d=M(n,l,r,a);
		e=(c>d)?d:c;
		b=(c>d)?c:d;
		H[i]=a[e];
		for(int j=e+1;j<=b;j++){
			H[i]=H[i]^a[j];
		}
	}
	for(int i=0;i<K;i++) printf("%lld\n",H[i]);
	return 0;
 }
 int N(int n,int l,int r,long long a[]){
 	int m=0;
 	for(int i=l;i<=r;i++){
 		m=m+a[i];
	 }
	 return m%n;
 } 
 int M(int n,int l,int r,long long a[]){
 	int m=1;
 	for(int i=l;i<=r;i++){
 		m=(m*a[i])%n; 
	 }
	 return m%n;
 }