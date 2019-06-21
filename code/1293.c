#include<stdio.h>
int main()
{
  int m,n,a,b,c,d;
  scanf("%d%d",&m,&n);
  d=m;
  b=m;
  c=n;
  for(m=b-1;m>=d-n+1;m--)
  b=b*m;
  for(n=c-1;n>=1;n--)
  c=c*n;
  a=b/c;
  printf("%d",a);
  return 0;
  }