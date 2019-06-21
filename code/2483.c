#include<stdio.h>
#include<string.h>
#include<math.h>
int C();
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(n==0)
        printf("0");
    else
    printf("%d",C(m,n));
    return 0;
}
int C(int n,int m)
{
    long long jie1=1,jie2=1,jie3=1,i;
    for(i=1;i<=n;i++)
    {
        jie1*=i;
    }
    for(i=1;i<=m;i++)
    {
        jie2*=i;
    }
    for(i=1;i<=(n-m);i++)
    {
        jie3*=i;
    }
    return jie1/(jie2*jie3);
}