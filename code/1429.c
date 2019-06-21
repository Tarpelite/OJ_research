#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int fenmu=1,fenzi=1,i;
    for(i=m;i>=m-n+1;i--)
    {
        fenzi=fenzi*i;
    }
    for(i=1;i<=n;i++)
    {
        fenmu=fenmu*i;
    }
    printf("%d",fenzi/fenmu);
}