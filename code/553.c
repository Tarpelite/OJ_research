#include<stdio.h>
int main()
{
    long long a=1,b=1,c=1,t;
    int m,n,i,j,k;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
        a*=i;
    for(j=1;j<=n;j++)
        b*=j;
    for(k=1;k<=(m-n);k++)
        c*=k;
    t=a/(b*c);
    printf("%d",t);
    return 0;
}