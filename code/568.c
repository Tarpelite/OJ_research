#include<stdio.h>

int isprime(int);
int main(void)
{
    int a;
    scanf("%d",&a);
    int b = a+1;
    while(b<200000){
        if(isprime(b))
            break;
        b++;
    }
    printf("%d",b);

    return 0;
}

int isprime(int x){
    int a = x-1;
    while(a>1){
        if(x%a==0)
            break;
        a--;
    }
    if(a==1)
        return 1;
    return 0;
}