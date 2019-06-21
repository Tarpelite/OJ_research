#include <stdio.h>
#include <stdlib.h>

int main()
{
   long int n,m,j,b=1,a=1,g=1,i,k;
    long int u;
    scanf("%ld %ld",&n,&m);
    if (m>20||n<0||m<0)
    {
        printf("error\n");
    }
   else
   {
       if (m==0)

    { printf("1\n");

    }
    else
    {
        for (i=1;i<=n;i++)
        {
            b=b*i;

        }
        for (j=1;j<=m;j++)
        {
            a=a*j;
        }
        for (k=1;k<=n-m;k++)
        {
            g=g*k;
        }
           u=b/a/g;
           printf("%ld",u);


    }


   }


    return 0;
}