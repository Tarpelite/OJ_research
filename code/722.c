#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,i,j,n,c;
    double d;
    scanf("%d",&n);
    for (i=n+1;i<100100;i++)
       {
       d=(double)(i);
      for(j=2,c=0;j<sqrt(d)+1;j++)
       {if(i%j==0)
        c++;
        }
      if(c==0)
      break;}
      printf("%d",i);
      return 0;
}