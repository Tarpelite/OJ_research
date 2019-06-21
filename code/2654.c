#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int c(int m,int n)
{   int x;
    if(n==1)
        x=m;
    else if(n==m||n==0)
    x=1;
    else
    x=c(m-1,n)+c(m-1,n-1);

    return x;
}

int main(){
    int n,m,x;

   scanf("%d%d",&m,&n);

   x=c(m,n);

   printf("%d",x);

   return 0;
}