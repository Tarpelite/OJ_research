#include<stdio.h>
int f(int);
int main()
{
  int i, n;
  scanf("%d",&n);
  for(i=n+1;i<=200000;i++)
  {
    if(f(i)==0)
    break;
  }
  printf("%d",i);
return 0;
}
int f(int a)
{
  int k,f=0;
  for(k=2;k<a;k++)
  {
  if(a%k==0)
  f++;
  }
  return f;
}