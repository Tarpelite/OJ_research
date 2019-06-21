#include<stdio.h>
int main()
{
    int m,n,s=1,i;
    scanf("%d%d",&m,&n);
    if(n>m)
    {
        printf("1");
        return 0;
    }
    if(n==0)
    {
        printf("0");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        s*=(m+1-i);
    }
    for(i=1;i<=n;i++)
    {
        s/=i;
    }
    printf("%d",s);
    return 0;
}