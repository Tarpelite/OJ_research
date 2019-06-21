#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j;
    int a=1,b=1;
    for(i=m;i>=m-n+1;i--)
    {
        a*=i;
    }
    for(j=1;j<=n;j++)
    {
        b*=j;
    }
    printf("%d",a/b);
    return 0;

}