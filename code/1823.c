#include <stdio.h>

int zhi(int n){
    int j;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
            return 1;
    }
    return 0;
}


int main() {
    int n;
    scanf("%d",&n);
    int i;
    for(i=n+1;;i++)
    {
        if(zhi(i)==0)
            break;
    }
    printf("%d",i);
    return 0;
}