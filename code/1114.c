#include<stdio.h>
int c(int m,int n)
{
    int i=n;
    if(n==1)
    {
        return m;
    }
    for(m,n;i>0;i--,m--,n--)
    {
        return c(m-1,n-1)*m/n;
    }
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",c(m,n));
    return 0;
}