#include <stdio.h>
int main()
{
  int m,n,i;
  long long a=1;
  scanf("%d%d",&m,&n);
  if(m==0||n==0)
    printf("1");
  else if(m<=n)
    printf("1");
  else
  {
   for(i=0;i<n;i++)
      a*=(m-i);
 for(i=1;i<=n;i++)
   a/=i;
 printf("%d",a);
  }
    
  return 0;
}