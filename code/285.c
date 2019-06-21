#include <stdio.h>
#include <stdlib.h>
int zx(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<=100010;i++){
        if(zx(i)){
            printf("%d",i);
            return 0;
        }

    }
    return 0;
}