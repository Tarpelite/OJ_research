#include <stdio.h>
#include <stdlib.h>

int is_prime(int n){
    for(int j=2;j*j<=n;j++){
        if(n%j==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(is_prime(n)){
        if(n==2)
            printf("3");
        else{
            for(int i=n+2;;i+=2){
                if(is_prime(i)){
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}