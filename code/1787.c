#include<stdio.h>
int main()
{
    int m,n,i,a,b,c;
    scanf("%d%d",&m,&n);
    a=1;b=1;c=1;
    for(i=1;i<=m;i++)
    {
        a=a*i;
    }
    for(i=1;i<=n;i++)
    {
        b=b*i;
    }
    for(i=m-n+1;i<=m;i++)
    {
        c=c*i;
    }
    printf("%d",c/b);

    return 0;
}