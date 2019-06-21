#include<stdio.h>
int main()
{
  int m,n,i,add=1,sum=1;
  scanf("%d%d",&m,&n);
  for(i=1;i<=n;i++){
    add*=m;
    sum*=i;
    m--;
  }
  printf("%d",add/sum);
}