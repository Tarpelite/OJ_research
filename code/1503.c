#include <stdio.h>

int main()
{int m,n,i,sum=1;
 scanf("%d %d",&m,&n);
 for(i=1;i<=n;i++)
  {sum=sum*m/i;
   m--;
  }
printf("%d",sum);
return 0;
}