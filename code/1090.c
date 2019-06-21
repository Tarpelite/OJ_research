#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,x=1,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<n+1;i++)
    {
        x*=m-n+i;
        x/=i;
    }
    printf("%d\n",x);
    return 0;
}