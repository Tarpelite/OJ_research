#include<stdio.h>
long long int jc(int a);
int main()
{
  int m,n,x;
  scanf("%d%d",&m,&n);
  x=jc(m)/jc(m-n)/jc(n);
  printf("%d",x);
  return 0;
}
long long int jc(int a)
{
    if(a==0||a==1) return 1;
    return (a*jc(a-1));
}