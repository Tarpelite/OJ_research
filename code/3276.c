#include<stdio.h>
int sum(int m,int n)
{   int s;
    if(m==n||n==0)s=1;
    else s=sum(m-1,n)+sum(m-1,n-1);
    return s;
}
int main()
{  int m,n,c;
   scanf("%d%d",&m,&n);
   c=sum(m,n);
   printf("%d",c);
}