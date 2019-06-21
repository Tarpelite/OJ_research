#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,t=1,i=0,a=1;
    scanf("%d%d",&m,&n);
    for(i=0;i<=n-1;i++){
        t=t*m;
        m--;
    }
    while(1){
        a=a*n;
        n--;
        if(n==0)break;
    }
    printf("%d",t/a);
    return 0;
}