#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int p=n+1,K=0;;p++){
        if(p%2==0){
            continue;
        }else{
            for(int i=2;i*i<p+1;i++){
                if(p%i==0){
                    K++;
                    break;
                }
            }
            if(K==1){
                K--;
                continue;
            }else{
                printf("%d",p);
                break;
            }
        }
    }
    return 0;
}