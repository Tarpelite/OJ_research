#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int  main()
{   int s;
    int m,n,p=1,q=1;
    scanf("%d%d",&m,&n);

    if (m>0)
    {


    for (int i=m-n+1;i<=m;i++)
    {
      p=p*i;
    }
    for (int j=1;j<=n;j++)
    {
        q=q*j;
    }
    s=p/q;
    printf("%d",s);
    }
    else
        printf("0");
    return 0;
}