#include <stdio.h>
#include <stdlib.h>
int isZhi(int a){
    int i;
    for(i=2;i<a;i++){
        if(a%i == 0) return 0;
    }
    return 1;
}
int main()
{
    int a,i;
    scanf("%d",&a);
    i = 1;
    while(!isZhi(a+i))i++;
    printf("%d",a+i);
    return 0;
}