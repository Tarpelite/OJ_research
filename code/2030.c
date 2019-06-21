#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int C(int m,int n){
    if(n==0||m==n)return 1;
    return C(m-1,n)+C(m-1,n-1);
}

int main(){
    int n,m;
    scanf("%d %d",&m,&n);
    printf("%d\n",C(m,n));
}