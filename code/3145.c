#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i;
    long long s=1;
    scanf("%d%d",&m,&n);
    if(n==0||n>=m)
    printf("1");
    else
    {
    if(n>m/2)
    {
    for(i=0;i<m-n;i++)
        s=s*(m-i);
    for(i=1;i<=m-n;i++)
        s=s/i;
    }
    else
    {
    for(i=0;i<n;i++)
        s=s*(m-i);
    for(i=1;i<=n;i++)
        s=s/i;
        }
    printf("%lld",s);
    }
    return 0; 
    }