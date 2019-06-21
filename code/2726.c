#include <stdio.h>

int main(){
    int m,n,C=1;
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++){
        C=C*(m-i)/(i+1);
    }
    printf("%d",C);
    return 0;
}