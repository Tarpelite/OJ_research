#include <stdio.h>
#include <stdlib.h>
int c(int m,int n){
  if(m<n||n<1||m<1)
    return 0;
  if(m==n)
    return 1;
  if(n==1)
    return m;
  return c(m-1,n)+c(m-1,n-1);
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",c(m,n));
    return 0;
}