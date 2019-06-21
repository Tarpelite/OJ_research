#include <stdio.h>
#include <stdlib.h>

long long  jiecheng(int n)
    {
      long long  f;
       if(n>1)
        f=jiecheng(n-1)*n;
       else
        f=1;
      return (f);
    }

int main()
{
    int m,n;
    long long  a;
    scanf("%d%d",&m,&n);

    if(n==0||m==0||n>=m)
        printf("1");
    else{
      if(n<m)
     a=jiecheng(m)/(jiecheng(n)*jiecheng(m-n));
     printf("%ld",a);
    }
         return 0;
}