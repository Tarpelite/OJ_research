#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int prime(int p){
        for (int i=2;i<=p;i++){
            if(i==p){
                return 1;
                break;
            }
            else if (p%i==0){
                return 0;
                break;
            }
        }
    }
    for (int i=n+1;i<=200000;i++){
        if (prime(i)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}