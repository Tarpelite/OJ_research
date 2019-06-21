#include<stdio.h>
int A(int m,int n){
    int i;
    int a=1;
    for(i=0;i<n;i++){
        a*=m;
        m--;
    }
    return a;
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",A(m,n)/A(n,n));
    return 0;
}