#include <stdio.h>
int ZH(int,int);

int main()
{
  int m,n;
  scanf("%d %d",&m,&n);
  printf("%d",ZH(m,n));
  return 0;
}


 int ZH(int m,int n){
  if(m<n||m<1||n<1) return 0;
  if(n==1) return m;
  if(m==n) return 1;
  else return ZH(m-1,n)+ZH(m-1,n-1);
}