#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,x=1,t;scanf("%d%d",&m,&n);t=m-n;
    for(;m>t;m--)
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