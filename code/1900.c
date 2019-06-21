#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,c=1;
    scanf("%d%d",&m,&n);
    for (i=m;i>=(m-n+1);i--)
        c*=i;
    for(i=n;i>0;i--)
        c/=i;
    printf("%d",c);
    return 0;
}