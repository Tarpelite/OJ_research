#include <stdio.h>

int isz(int x){
    int i;
    if(x==2)
        return 1;//isz-return 1
    for(i=2;i<x;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    for(m=++n;;m++){
        if(isz(m)==1){
            printf("%d",m);
            return 0;
        }

    }
    return 0;
}