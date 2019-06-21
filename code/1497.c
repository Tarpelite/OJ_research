#include <stdio.h>
int pdzs(int x);
int main(void) {
    int n,z;
    scanf("%d",&n);
    z=n+1;
    while(pdzs(z)!=1){
        z+=1;
    }
    printf("%d",z);
    
    return 0;
}

int pdzs(int x){
    int j,k=1;
    for(j=x-1;j>1;j--){
        if(x%j==0){
            k=0;
            break;
        }
    }
    return k;
}