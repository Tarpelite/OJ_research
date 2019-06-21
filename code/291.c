#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int f(int a){
    int y=0;
    for (int i=2;i<a;i++){
        if(a%i==0){
            y=1;
            break;}
    }
    return y;
}

int main(){
    int n;
    scanf("%d",&n);
    n++;
    while(f(n)){
        n++;
    }
    printf("%d",n);
    return 0;
}