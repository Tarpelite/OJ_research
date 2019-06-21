#include<stdio.h>
int main()
{
    int m,n,s=1,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        s*=(m+1-i);
    }
    for(i=1;i<=n;i++)
    {
        s/=i;
    }
    printf("%d",s);
}