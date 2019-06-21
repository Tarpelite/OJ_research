#include<stdio.h>
int check_(int n){
    for(int j=2;j<n;j++){
        if(n%j==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,b;
    scanf("%d",&n);
    for(int i=1;i<2*n;i++){
        if(check_(n+i)==1){
        b=i;
            break;
        }
    }
    printf("%d",n+b);
    return 0;
}