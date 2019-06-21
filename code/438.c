#include<stdio.h>
int hi(int);
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=n+1;i<=200000;i++)
  {
    if(hi(i)==0)
    break;
  }
  printf("%d",i);
return 0;
}
int hi(int a)
{
  int k,m=0;
  for(k=2;k<a;k++)
  {
  if(a%k==0)
  m=m+1;
  }
  return m;
}