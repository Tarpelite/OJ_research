#include<stdio.h>
 #include<math.h> 
int panduan(int );
 int main() { int n,pp,pa; scanf("%d",&n); n=n+1; pa=1; while(pa==1) { pa=panduan(n); n++; } printf("%d",n-1); return 0; } int panduan(int x) { int p=0; for(int i=2;i<=x/2;i++){ if(x%i==0){ p=1; i=x/2; } } return p; }