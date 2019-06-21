#include <stdio.h>
#include <stdlib.h>

int main( )
{
    int i,k,n;
    scanf("%d",&n);
    for(i=n+1;i<=300000;i++){
        for(k=2;k<=i;k++){
            if((i%k)==0){
                break;
            }
        }
        if(k==i){
            break;
        }
    }
    printf("%d",i);
    return 0;
}