#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int f=1,i;
    for(i=m;i>=m-n+1;i--)
    {
        f*=i;
    }
    for(i=1;i<=n;i++)
    {
        f/=i;
    }
    printf("%d",f);
    return 0;
}