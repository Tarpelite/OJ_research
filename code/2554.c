#include <stdio.h>

int isprime(int a);

int  main(){
    int n,i;scanf("%d",&n);
    for(i=n+1;isprime(i)==0;i++){}
    printf("%d\n",i);
    return 0;
}

int isprime(int a){
    if(a<2) return 0;
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return 0;
    }
    return 1;
}