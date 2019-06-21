#include<stdio.h>
int c(int,int);
int main()
{  int m,n;
scanf("%d%d",&m,&n);
   printf("%d",c(n,m));
   return 0;
}
int c(int n,int m)
{  if(n==1)
    return m;
    if(n==m) return 1;
   return c(n,m-1)+c(n-1,m-1);
}