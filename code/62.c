#include<stdio.h>
int main(void)
{
    int m,n,i,j;
    int sum1 = 1,sum2 = 1;
    scanf("%d %d",&m,&n);
    for((i=(m-n)+1);i<=m;i++)
        sum1=sum1*i;
    for(j=1;j<=n;j++)
        sum2=sum2*j;
    printf("%d",(sum1/sum2));
    return 0;
}