#include <stdio.h>
int sushu(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
            break;
    }
    if(n==1)return 0;
    else if(i<n)return 0;
    else return 1;
}
int main() {
    int n,i;
    scanf("%d",&n);
    i=n;
    while(sushu(i+1)==0){
        i++;
    }
        printf("%d\n",i+1);
    return 0;
}