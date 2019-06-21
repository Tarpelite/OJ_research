#include <stdio.h>
int xmx(int m,int n)
{
    if(m==n||n==0)
        return 1;
    if(n==1||m==n+1)
        return m;
    else
        return xmx(m-1,n-1)+xmx(m-1,n);
}
int main()
{
  int m,n;
  scanf("%d%d",&m,&n);
  printf("%d",xmx(m,n));


return 0;
}