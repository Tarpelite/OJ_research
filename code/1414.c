#include <stdio.h> 
int main() 
{ int i,n,m,a[20],s=1,x=1,b[20];
 scanf("%d%d",&m,&n); 
 for(i=1;i<=n;i++) {
        a[i]=m+1-i; s=s*a[i]; }
 for(i=1;i<=n;i++){
        b[i]=i; x=x*b[i]; }
 printf("%d",s/x);
  return 0; }