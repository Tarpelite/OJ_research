#include <stdio.h>
#include <stdlib.h>
int a[100000],b[100000];
int main()
{
    int c,d=1,j,k,e,i;
    scanf("%d",&c);
    for(i=1;i<=c;i++){
        scanf("%d",&e);
        a[e]=a[e]+1;

    }
    scanf("%d",&k);
    for(j=1;j<=100000;j++){
        if(a[j]!=0){
            b[d]=j;
            d++;
        }
    }
    printf("%d %d",b[d-k],a[b[d-k]]);

    return 0;
}