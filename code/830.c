#include <stdio.h>
int panduan(int n);
int main()
{
    int n,i;
    scanf("%d",&n);
for(i=n+1;i<100010;i++){
    if(panduan(i)==1){
        printf("%d",i);
        break;}
}
    return 0;
}

int panduan(int x){
int i,t;
t=0;
for(i=2;i<x;i++){
    if(x%i==0){
        t=1;
        break;
    }
}
if(t==0)
    return 1;
else
    return 0;
}