#include <stdio.h>
int main()
{ int i,n,l,a[20],s=1,x=1,b[20];
 scanf("%d%d",&l,&n);
 for(i=1;i<=n;i++) {
        a[i]=l+1-i; s=s*a[i]; }
 for(i=1;i<=n;i++){
        b[i]=i; x=x*b[i]; }
 printf("%d",s/x);
  return 0; }