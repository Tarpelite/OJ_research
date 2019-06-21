#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    long long A1=1,A2=1,A3=1;
    int i,j,k;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
     {
        A1=A1*i;
     }
    for(j=1;j<=n;j++)
    {
        A2=A2*j;
    }
    for(k=1;k<=(m-n);k++)
    {
        A3=A3*k;
    }
    //printf("%lld %lld %lld",A1,A2,A3);
    if( (m==0&&n==0)||(m==0)||(n==0))
        printf("%d",0);
    else
        printf("%d",A1/(A2*A3));
    return 0;
}