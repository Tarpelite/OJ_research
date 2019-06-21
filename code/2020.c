#include<stdio.h>
int main(void){
    int m, n, i, s = 1;

    scanf("%d %d", &m, &n);
    for(i=m-n+1;i<=m;i++){
        s*=i;
    }

    for(i=n;i>0;i--){
        s/=i;
    }

    printf("%d",s);

    return 0;

}