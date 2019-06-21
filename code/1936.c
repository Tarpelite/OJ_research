#include <stdio.h>
#include <stdlib.h>
int isPrime(int a);

int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==2)
        printf("3\n");
    else{
        for(i=n+2;;i=i+2){
            if(isPrime(i)){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

int isPrime(int a)
{
    int i;
    for(i=2;i*i<=a;++i){
        if(a%i==0) return 0;
    }
    return 1;
}