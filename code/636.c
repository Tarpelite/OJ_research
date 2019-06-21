#include<stdio.h>
int main()
{
  int m,n,k1=1,k2=1,s,i;
  scanf("%d%d",&m,&n);
  for(i=m;i>=m-n+1;i--)
  k1=k1*i;
  for(i=n;i>=1;i--)
  k2=k2*i;
  s=(k1)/(k2);
  printf("%d",s);
  return 0;
}