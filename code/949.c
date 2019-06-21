#include <stdio.h>
  int main()
{
    int m,n,i,c=1;
    scanf("%d%d",&m,&n);

     if(n>m-n)n=m-n;
    for(i=1;i<=n;i++)
      c=c*(m+1-i)/i;
     printf("%d",c);
 return 0;
}