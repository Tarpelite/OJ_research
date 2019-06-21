#include<stdio.h>
int f(int x);
int main()
{
  int n,m;
  scanf("%d",&n);
  m=n+1;
  while(f(m)!=1){
    m++;
  }
   printf("%d",m);
   return 0;}
int f(int x)
{
    int i;
    i=x-1;
    while(x%i!=0){
        i--;
    }
      if(i>1)
        return 0;
     else if(i==1)
        return 1;
    }