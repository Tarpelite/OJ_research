#include <stdio.h>

int main()
{
    int a,i=0,j=0,k=0;
    scanf("%d",&a);
    for(i=a+1;k==0;i++){
        for(j=2;j<=i-1;j++){
            if(i%j==0){
                break;
            }
            if(j==i-1){
                    k=1;
                break;
            }
        }
    }
    printf("%d",i-1);
    return 0;
}