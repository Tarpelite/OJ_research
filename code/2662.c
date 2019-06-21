#include<stdio.h>
int jie(int n)
{
    if(n==1)
        return 1;
    else return n*jie(n-1);
}
int main()
{
    int m,n,sum=1,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        sum*=m;
        m--;

    }
    sum/=jie(n);
    printf("%d",sum);
    return 0;
}