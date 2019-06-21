#include <stdio.h>
int zhishu(int a)
{
  int i,n=0;
  for(i=2;i<=a;i++)
    if(a%i==0)
      n++;
  if(n==1)
    return 1;
  else
    return 0;
}
int main()
{
  int n,m,d;
  scanf("%d",&n);
  m=n+1;
  while(1)
  {
   d=zhishu(m);
if(d==1)
   {
     printf("%d",m);
     break;
 }
 m++;
  }
  return 0;
}