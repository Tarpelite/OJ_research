#include<stdio.h>
int main()
{
    int m,n,i,x,a=1,b=1;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++)
    {
     a=a*m;
     b=b*(i+1);
     m=m-1;
    }
    x=a/b;
    printf("%d",x);
    return 0;
}