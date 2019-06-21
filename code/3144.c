#include <stdio.h>
int comb (int m,int n);
int main()
{ int m,n;
scanf("%d%d",&m,&n);
printf("%d",comb(m,n));
    return 0;
}
int comb (int m,int n)
{if(n>m||m<1||n<1)
 return 0;
   if (n==1)
    return m;
   if (n==m)
    return 1;
   return comb(m-1,n)+comb(m-1,n-1);
}