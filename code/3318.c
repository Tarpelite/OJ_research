#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int  main()
{
    int n,q=1;
    scanf("%d",&n);
    for (int i=1;;i++)
    {
        int p;
        p=n+i;
        for (int j=2;j<=(n+i)/2;j++)
        {
            if (p%j==0)
               {
                goto A;
            }
          else  q=q+1;
        }
        A:
        if (q==(n+i)/2)
        {
        printf("%d",p);
        break;
        }
       q=1;
    }

    return 0;
}