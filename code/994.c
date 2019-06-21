#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    for(i=n+1;;i++){
        for(k=2;k<=i;k++){
            if(i%k==0){break;}
        }
        if(i==k){break;}
    }
    printf("%d",i);
    return 0;
}