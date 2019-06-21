#include <stdio.h>

int main()
{
    int n,m,i=0,x=1,y=1,j=0;
    scanf("%d%d",&n,&m);
    for(i=n;i>n-m;i--){
        x=x*i;
    }
    for(j=m;j>1;j--){
        y=y*j;
    }
    printf("%d",x/y);
    return 0;
}