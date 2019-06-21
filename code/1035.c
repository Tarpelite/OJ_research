#include <stdio.h>
long int bi(int m,int n)
{   long int s;
    if(m==n||n==0)s=1;
    else s=bi(m-1,n)+bi(m-1,n-1);
    return s;
}
int main()
{  int m,n;
   scanf("%d%d",&m,&n);
   long int c=bi(m,n);
   printf("%ld",c);
   return 0;
}