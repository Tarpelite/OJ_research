#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,N,m=2;
    scanf("%d",&n);
    N=n+1;

    while(m*m<=N){
        if (N%m!=0)
            m++;
        else{
            m=2;
            N++;}
     }
    printf("%d",N);
    return 0;
}