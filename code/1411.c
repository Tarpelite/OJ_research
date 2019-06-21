#include<stdio.h>
int main()
{
    int m,n,i,x=1,y=1,temp;
    scanf("%d%d",&m,&n);
    temp=m;
    for(i=2;i<=n;i++)
        x*=i;
    for(i=0;i<n;i++,temp--)
        y*=temp;
    printf("%d",y/x);
    return 0;
}