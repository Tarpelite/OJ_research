#include<stdio.h>
#include<string.h>

int isprime(int a);

int main()
{
    int n,resu,i;
    scanf("%d", &n);
    i=n+1;
    while(!isprime(i)){
        i++;
    }
    printf("%d", i);
    return 0;
}

int isprime(int a)
{
    int i;
    for(i=2;i<(a/2);i++)
        if(a%i==0) return 0;
    return 1;
}