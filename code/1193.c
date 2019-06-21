#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=n+1;
    while(i>n){
        for(j=2;j<i;j++){
            if(i%j==0) break;
        }
        if(i==j) break;
        i++;
    }
    printf("%d",i);
    return 0;
}