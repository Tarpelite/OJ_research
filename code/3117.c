#include <stdio.h>
long bi(int m,int n)
{   long s;
    if(m==n||n==0)s=1;
    else s=bi(m-1,n)+bi(m-1,n-1);
    return s;
}
int main()
{  int m,n;
   scanf("%d%d",&m,&n);
   long c=bi(m,n);
   printf("%ld",c);
   return 0;
}