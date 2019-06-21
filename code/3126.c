#include<stdio.h>
long sum(int m,int n)
{   long s;
    if(m==n||n==0)s=1;
    else s=sum(m-1,n)+sum(m-1,n-1);
    return s;
}
int main()
{  int m,n;
   scanf("%d%d",&m,&n);
   long c=sum(m,n);
   printf("%ld",c);
}