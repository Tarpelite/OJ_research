#include <stdio.h>
#include <stdlib.h>
int C(int m,int n)
{
   if(m<n||m<1||n<1)
     return 0;
   if(n==1)
     return m;
   if(m==n)
     return 1;
   return C(m-1,n)+C(m-1,n-1);

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",C(a,b));
    return 0;
}