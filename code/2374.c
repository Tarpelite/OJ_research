#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j,k;

    scanf("%d",&a);

    i=a;
    j=0;

    for(k=a+1;;k++){
        j=0;
        for(i=2;i<k;i++){
            if(k%i==0){
                j=j+1;
            }
        }
        if(j==0){
            printf("%d",k);
            break;
        }
    }

    return 0;
}