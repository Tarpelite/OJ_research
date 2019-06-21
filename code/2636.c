#include<stdio.h>

int prime(int x)
{
    int k=0,i;
    for(i=1;i<=x/2;i++){
        if(x%i==0)
            k+=1;
    }
    return k;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n++){
        if(prime(n)==1)
            break;
    }
    printf("%d",n);
    return 0;
}