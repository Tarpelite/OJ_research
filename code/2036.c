#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char isPrime(int n){
    if(n==2)return 1;
    int i,s=sqrt(n)+1;
    for(i=2;i<=s;i++)if(n%i==0)return 0;
    return 1;

}

int main(){
    int n,i=1;
    scanf("%d",&n);
    while(!isPrime(i+n))i++;
    printf("%d\n",i+n);
}