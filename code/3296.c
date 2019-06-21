#include <stdio.h>
int isprime(int a){
    int j,k=0;
    for(j=2;j<a;j++){
        if(a%j==0){
        k=k+1;
        break;
        }
    }
    if(k==0){
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n, k, i;
    scanf("%d", &n);
    for(i = n + 1;;i++){
        if(isprime(i)==1){
            k = i;
            break;
        }
    }
    printf("%d",k);
    return 0;
}