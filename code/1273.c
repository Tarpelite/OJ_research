#include <stdio.h>
int main ()
{
    int m,n,i,b;
    int sum=1,sq=1;

    scanf("%d%d",&m,&n);

    for(i=m;i>m-n;i--)
    {
        sum=sum*i;
    }
    for(i=1;i<=n;i++){
        sq=sq*i;
    }
    sum=sum/sq;
    printf("%d",sum);
}