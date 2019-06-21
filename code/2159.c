#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int m,n,i,sum=1,sum2=1;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*m;
        m=m-1;
        sum2=sum2*i;
    }
    printf("%d",sum/sum2);
  return 0;
}