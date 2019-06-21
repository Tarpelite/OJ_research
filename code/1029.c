#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,x=1;
    scanf("%d %d",&m,&n);
    i=m;
    while(i>=m-n+1){
        x=x*i;
        i--;
    }
    j=1;
    while(j<=n){
        x=x/j;
        j++;
    }
    printf("%d\n",x);
    return 0;
}