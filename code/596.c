#include <stdio.h>
 int main() { 
double m,n,ans,i;
 scanf("%lf%lf",&m,&n); 
for(i=0,ans=1;i<n;i++)
 ans*=(m-i)/(n-i);
 printf("%.0lf",ans);
 return 0; }