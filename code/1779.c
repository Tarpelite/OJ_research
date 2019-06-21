#include <stdio.h>
#include <stdlib.h>

int z(int x){
    if(x==1) return 0;
    for(int now=2;now*now<=x;now++)
        if(x%now==0)
        return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(1){
        if(z(++n)==1){
            printf("%d",n);
            break;
        }
    }
    return 0;
}