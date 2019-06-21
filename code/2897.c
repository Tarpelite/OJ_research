#include<stdio.h>
#include<math.h>
int function(int m,int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",function(m,n));
    return 0;
}
int function(int m,int n)
{
    if(m<n||m<1||n<1)
        return 0;
    if(n==1)
        return m;
    if(m==n)
      return 1;
    return function(m-1,n)+function(m-1,n-1);
}