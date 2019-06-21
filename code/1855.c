#include<stdio.h>

int main()
{
    int a,b,ans=1,i;
    scanf("%d%d",&a,&b);
    for(i=a;i>a-b;i--)
    {
        ans=ans*i;
    }
    for(i=1;i<=b;i++)
    {
        ans=ans/i;
    }
    printf("%d",ans);
}