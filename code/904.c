#include<stdio.h>
int main(void)
{
    int m,n,i,j;
    int sum_1 = 1,sum_2 = 1;
    scanf("%d %d",&m,&n);
    for((i=(m-n)+1);i<=m;i++)
        sum_1=sum_1*i;
    for(j=1;j<=n;j++)
        sum_2=sum_2*j;
    printf("%d",(sum_1/sum_2));
    return 0;
}