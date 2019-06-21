#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,x=1,t1,t2;scanf("%d%d",&m,&n);
    t1=m-n;
    if(n>t1)
    {
        t2=t1;t1=n;n=t2;
    }
    for(;m>t1;m--)
    {
        x*=m;
    }
    for(;n>0;n--)
    {
        x/=n;
    }

    printf("%d",x);
    return 0;
}