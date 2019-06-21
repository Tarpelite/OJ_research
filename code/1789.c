#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,r,s,i;
    scanf("%d%d",&m,&n);
    for(i=m,r=1;i>=m-n+1;i--)
        r=r*i;
    for(i=n,s=1;i>=1;i--)
        s=s*i;
    printf("%d",r/s);
    return 0;
}