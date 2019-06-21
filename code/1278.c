#include<stdio.h>

int main()
{
    int m,n,i,j,a=1,b=1;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++)
        a=a*(m-i);
    for(j=1;j<n+1;j++)
        b=b*j;

    printf("%d",a/b);
    return 0;


}