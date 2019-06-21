#include <stdio.h>
 #include <stdlib.h>
 int N(int a[],int l,int r,int n) 
{ int i,sum;
 for(i=l,sum=0;i<=r;i++)    sum+=a[i];
 sum%=n; 
return sum; }
 int M(int a[],int l,int r,int n) { 
int i,sum;
 for(i=l,sum=1;i<=r;i++)  sum=(sum*a[i])%n;
 sum%=n;
 return sum; }
 int H(int a[],int l,int r,int n)
 { int i,sum;
 for(i=l+1,sum=a[l];i<=r;i++)
 sum=sum^a[i];
 return sum; }
 int max(int a,int b) {
 return a>b?a:b; } 
int min(int a,int b) {
 return a>b?b:a; }
 int main() { 
int N(int a[],int l,int r,int n);
 int M(int a[],int l,int r,int n);
 int H(int a[],int l,int r,int n);
 int max(int a,int b);
 int min(int a,int b);
 int n,K,i;
 int a[10010];
 int l,r;
 scanf("%d%d",&n,&K);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<=K;i++) { 
scanf("%d%d",&l,&r); printf("%d\n",H(a,min(N(a,l,r,n),M(a,l,r,n)),max(N(a,l,r,n),M(a,l,r,n)),n)); } return 0; }