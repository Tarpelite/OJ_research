#include <stdio.h>

int main()
{
    int m, n;
    int i, k=1;
    scanf("%d%d", &n, &m);
    if(n==0 || m==0){
        k = 0;
    }
    else if(n>=m){
        for(i=n;i>=(n-m+1);i--){
            k = k * i;
        }
        for(i=1;i<=m;i++){
            k=k/i;
        }
    }
    else{
        k = 1;
    }
    printf("%d", k);
    return 0;
}