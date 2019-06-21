#include<stdio.h>
int main()
{
    int m,n,i;
    long long a1=1,a2=1;
    scanf("%d %d",&m,&n);
    for(i = m;i>m-n;i--)
    {
        a1 = a1 * i;
    }
    for(i = 1;i<=n;i++)
    {
        a2 = a2 * i;
    }
    printf("%d",a1/a2);

}