#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int i,x=1,y=1;
    for(i=0;i<n;i++){
        x*=(m-i);
        y*=(n-i);}
    printf("%d",x/y);
    return 0;
    }