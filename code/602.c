#include <stdio.h>

int main()
{
    int a,b,k=1,i;
    scanf("%d",&a);
    b=a;
    while(k!=0){
            k=0;
            b++;
        for(i=2;i<b;i++){
            if(b%i==0){
                k++;
            }
        }
    }
    printf("%d",b);
}