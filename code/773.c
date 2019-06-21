#include<stdio.h>
int zhi(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
            return 1;
    }
    return 0;
}
int main(){
    int n,i;
    scanf("%d",&n);
    n++;
    while(zhi(n)){
        n++;
    }
    printf("%d",n);
    return 0;
}