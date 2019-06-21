#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a=1,b=1,c;
    for(int i=1;i<=n;i++)
        {a=a*i;}
    for(int j=m-n+1;j<=m;j++)
        {b=b*j;}
    c=b/a;
    printf("%d",c);
    return 0;
}