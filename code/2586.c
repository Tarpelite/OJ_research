#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    int fz=m,fm=1;
    for(i=1;i<n;i++)
    {
        fz=fz*(m-i);
    }
    for(i=1;i<=n;i++)
    {
        fm=fm*i;
    }
    int jg=fz/fm;
    printf("%d",jg);
}