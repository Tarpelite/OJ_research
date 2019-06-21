#include <stdio.h>
int main()
{
    int n,m,i,x=1,y=1,z;
    scanf ("%d%d",&m,&n);
    for(i=m;i>m-n;i--)
        x*=i;
    for(i=1;i<=n;i++)
        y*=i;
    z=x/y;
    printf("%d",z);
    return 0;
}