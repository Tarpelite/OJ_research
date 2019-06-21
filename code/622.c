#include <stdio.h>
int main()
{
    int m,n,i,j,b,c,f;
    scanf("%d%d",&m,&n);
    for(i=m,b=1;i>m-n;i--)
        b=b*i;
    for(j=n,c=1;j>=1;j--)
        c=c*j;
    f=b/c;
    printf("%d",f);
    return 0;
}