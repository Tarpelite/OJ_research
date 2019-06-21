#include<stdio.h>

int main()
{
     int m,n,a=1,b=1,plan;
     scanf("%d%d",&m,&n);
     plan=m-n+1;
     while(m>=plan)
     {
          a=a*m;
          m--;
     }
     while(n>0)
     {
          b=b*n;
          n--;
     }
     printf("%d",a/b);
     return 0;
}