#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int isprime;
    for(i=n+1;;i++){
        isprime=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            printf("%d",i);
            break;

        }
    }



    return 0;
}