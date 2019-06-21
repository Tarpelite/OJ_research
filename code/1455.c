#include <stdio.h>
int is_prime(int);
int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(is_prime(n+i)==0)
    {i++;}
    printf("%d",n+i);
    return 0;
}
int is_prime(int x){
    if(x==1) return 0;
    for(int now=2;now*now<=x;now++)
        if(x%now==0)
        return 0;
    return 1;
}