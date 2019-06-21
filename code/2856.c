#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j=n+1,k=0;
    while(j<2*n){
        for(i=2;i<j;i++){
            if(j%i==0){
                k++;
            }
        }
        if(k==0){
            printf("%d",j);
            return 0;
        }
        else{
            j++;
            k=0;
        }
    }
    return 0;
}